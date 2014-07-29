//
//  SceneManager.cpp
//  ProtoConnect
//
//  Created by Eric Giraud on 01/11/2013.
//
//



#include "SceneManager.h"
//#include "FlurryController.h"

USING_NS_CC;

SceneManager* SceneManager::m_instance = NULL;

SceneManager::SceneManager()
{
    showLogs = true;
}

SceneManager::~SceneManager()
{
    delete pDirector;
    //delete pGLView;
}

SceneManager* SceneManager::Instance()
{
    if (NULL == m_instance)
    {
        m_instance = new SceneManager;
        m_instance->init();
    }
    
    return m_instance;
}

void SceneManager::init()
{
    // initialize director
    pDirector = Director::getInstance();
    pGLView = pDirector->getOpenGLView();
    
    if(!pGLView) {
        pGLView = GLView::create("ProtoConnect");
        pDirector->setOpenGLView(pGLView);
    }

    // turn on display FPS
    pDirector->setDisplayStats(true);
    
    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);
    
}


void SceneManager::startWithScene(Scene * pScene)
{
    pDirector->runWithScene(pScene);
}

void SceneManager::changeScene(Scene * pScene)
{
    pDirector->replaceScene(pScene);
}

void SceneManager::showMenu()
{
    if (showLogs)
        std::cout << "chargement du menu\n";
    
    //FlurryController::Instance()->logSimpleEvent("Menu");
    
    changeScene(MainMenu::scene());
}

void SceneManager::startGame()
{
    if (showLogs)
        std::cout << "chargement du jeu\n";
    
    //FlurryController::Instance()->logSimpleEvent("Game");
    
    //changeScene(GameScene::scene());
}



