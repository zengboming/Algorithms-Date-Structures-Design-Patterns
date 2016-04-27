#include "HelloWorldScene.h"
#include "cocos-ext.h"
using namespace cocos2d::extension;

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    if (!Layer::init())
    {
        return false;
    }
    
	/*
	Scale9Sprite* nineGirl = Scale9Sprite::create("button.png");
	nineGirl->setContentSize(Size(200, 100));
	nineGirl->setPosition(Point(200, 200));
	this->addChild(nineGirl);
	*/

	//正常状态下的按钮图片
	Scale9Sprite* btnNormal = Scale9Sprite::create("button.png");
	//单机状态下的按钮图片
	Scale9Sprite* btnDown = Scale9Sprite::create("buttonHighlighted.png");
	//按钮标题
	Label* title = Label::create("Touch me!", "Marker Felt", 30);
	//创建按钮，按钮的大小会根据体表自动调整
	ControlButton* controlBtn = ControlButton::create(title, btnNormal);
	//设置按钮按下时的照片
	controlBtn->setBackgroundSpriteForState(btnDown, Control::State::HIGH_LIGHTED);

	controlBtn->setPosition(Point(200, 200));
	this->addChild(controlBtn);

    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
