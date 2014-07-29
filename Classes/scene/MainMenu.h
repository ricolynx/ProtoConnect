//
//  MainMenu.h
//  Reflex
//
//  Created by Eric Giraud on 01/11/2013.
//
//

#ifndef __ProtoConnect__MainMenu__
#define __ProtoConnect__MainMenu__

#include "cocos2d.h"
#include "SceneManager.h"

class MainMenu : public cocos2d::Layer
{
    private :
        bool showLogs;
        cocos2d::SpriteBatchNode* batchNode;
    
    public :
        virtual bool init();
    
        static cocos2d::Scene* scene();
    
        void playCallback(Ref* pSender);
    
        CREATE_FUNC(MainMenu);
};

#endif // __Reflex__MainMenu__
