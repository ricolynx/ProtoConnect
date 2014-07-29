//
//  MainMenu.cpp
//  Reflex
//
//  Created by Eric Giraud on 01/11/2013.
//
//
#include "MainMenu.h"
USING_NS_CC;


Scene* MainMenu::scene()
{
    // 'scene' is an autorelease object
    Scene *scene = Scene::create();
    
    // 'layer' is an autorelease object
    MainMenu *layer = MainMenu::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


// on "init" you need to initialize your instance
bool MainMenu::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
    
    this->batchNode = cocos2d::SpriteBatchNode::create("mainMenuAtlas.png");
    this->addChild(batchNode);
    
    cocos2d::SpriteFrameCache::getInstance()->addSpriteFramesWithFile("mainMenuAtlas.plist");
    
    
    MenuItemSprite *pPlayItem = MenuItemSprite::create(cocos2d::Sprite::createWithSpriteFrameName("play.png"),
                                                       cocos2d::Sprite::createWithSpriteFrameName("play_selected.png"),
                                                       CC_CALLBACK_1(MainMenu::playCallback, this));
    
	pPlayItem->setPosition(origin.x + visibleSize.width / 2 ,
                               origin.y + visibleSize.height / 2);
    
    // create menu, it's an autorelease object
    Menu* pMenu = Menu::create(pPlayItem, NULL);
    pMenu->setPosition(origin.x,origin.y);
    this->addChild(pMenu, 1);
    
    return true;
}


void MainMenu::playCallback(Ref *pSender){
    //SceneManager::Instance()->startGame();
}








