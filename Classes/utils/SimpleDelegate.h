//
//  SimpleDelegate.h
//  Reflex
//
//  Created by Eric Giraud on 08/12/2013.
//
//

#ifndef __ProtoConnect__SimpleDelegate__
#define __ProtoConnect__SimpleDelegate__

#include <iostream>
#include "Delegate.h"

//implementation of a simple delegate to call void func with no args
template<typename T>
class SimpleDelegate : public Delegate
{
    public:
    
        //constructor
        SimpleDelegate (T *o, void(T::*func)()){
            std::cout << " SimpleDelegate constructor :" << o << std::endl;
            this->_object = o;
            this->_func = func;
        }
    
        //Destructor
        ~SimpleDelegate(){
            std::cout << " SimpleDelegate destructor :" << this->_object << std::endl;
            this->_object = 0;
            this->_func = 0;
        }
    
        //invoke the delegate func
        void invoke()
        {
            (this->_object->*(this->_func))();
        }
    
    private:
        T *_object;
        void(T::*_func)();
};

#endif /* defined(__ProtoConnect__SimpleDelegate__) */
