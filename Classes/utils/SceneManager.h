//
//  SceneManager.h
//  Reflex
//
//  Created by Eric Giraud on 01/11/2013.
//
//

#ifndef __ProtoConnect__SceneManager__
#define __ProtoConnect__SceneManager__

#include <iostream>
#include "cocos2d.h"
#include "MainMenu.h"
//#include "GameScene.h"

class SceneManager
{
private:
    
    bool showLogs;
    
    static SceneManager* m_instance;
    
    cocos2d::Director* pDirector;
    cocos2d::GLView* pGLView;
    
    SceneManager();
    virtual ~SceneManager();
    
    void init();
    

    
public:
   
    
    static SceneManager* Instance();
    
    void startWithScene(cocos2d::Scene *);
    
    void changeScene(cocos2d::Scene *);
    
    void showMenu();
    
    void startGame();
    
};

#endif /* defined(__ProtoConnect__SimpleDelegate__) */
