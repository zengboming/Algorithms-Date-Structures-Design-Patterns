#include "HelloWorldScene.h"

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
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
	Size visibleSize = Director::getInstance()->getVisibleSize();
	/*
	//创建一个精灵
	Sprite* xiaoRuo = Sprite::create("sprite.png");
	xiaoRuo->setPosition(Point(100, visibleSize.height / 2));
	xiaoRuo->setScale(2.0f);//拉伸
	this->addChild(xiaoRuo);
	//创建另一个
	Sprite* xiaoRuo2 = Sprite::create("sprite.png");
	xiaoRuo2->setPosition(Point(400, visibleSize.height / 2));
	xiaoRuo2->setScale(2.0f);//拉伸
	this->addChild(xiaoRuo2);

	//创建MoveTo动作
	//MoveTo* moveTo = MoveTo::create(0.9f, Point(250, 150));//移动到250,150
	//MoveBy* moveBy = MoveBy::create(0.9f, Point(250, 150));//移动距离

	//创建ScaleTo动作
	ScaleTo* scaleTo = ScaleTo::create(3.0f,1.0f,1.0f);
	ScaleBy* scaleBy = ScaleBy::create(3.0f,2.0f,1.0f);



	//精灵执行动作
	//xiaoRuo->runAction(moveTo);
	//xiaoRuo->runAction(moveBy);
	//xiaoRuo->runAction(scaleTo);
	xiaoRuo->runAction(scaleTo);
	xiaoRuo2->runAction(scaleBy);
	*/
	
	
	Sprite* sprite = Sprite::create("sprite.png");
	/*
	sprite->setPosition(Point(visibleSize.width / 2, visibleSize.height / 2));
	this->addChild(sprite);
	//创建Blink动作对象
	Blink* blink = Blink::create(3.0f, 3);
	sprite->runAction(blink);
	*/

	/*
	sprite->setPosition(Point(50,180));
	this->addChild(sprite);
	//创建贝赛尔曲线
	ccBezierConfig bezier;
	bezier.controlPoint_1 = Point(100, 0);//波谷
	bezier.controlPoint_2 = Point(200, 250);//波峰
	bezier.endPosition = Point(300,50);//终点
	//创建CCBezierTo对象
	BezierTo* bezierTo = BezierTo::create(4.0f, bezier);
	BezierBy* bezierBy = BezierBy::create(4.0f, bezier);
	//执行动作
	sprite->runAction(bezierBy);
	*/

	sprite->setPosition(Point(visibleSize.width / 2, visibleSize.height / 2));
	this->addChild(sprite);
	
	/*
	//创建JumpBy动作
	JumpBy* jumBy = JumpBy::create(3.0f, Point(50, 1), 100, 1);
	//以jumpBy为参数，创建一个永久重复动作
	RepeatForever* repeatForeverAction = RepeatForever::create(jumBy);
	//以jumpBy为参数，创建一个指定重复次数的动作
	Repeat* repeatAction = Repeat::create(jumBy, 3);
	sprite->runAction(repeatAction);
	*/

	//创建一个移动对象
	MoveBy* moveBy = MoveBy::create(2.2f, Point(40, 20));
	//创建一个弹跳对象
	JumpBy* jumpby = JumpBy::create(3.0f, Point(50, 1), 100, 5);
	//创建一个旋转对象
	RotateBy* rotateBy = RotateBy::create(2.5f, 220, 10);
	//创建组合动作对象，所有动作连起来
	Action* action = Spawn::create(moveBy,jumpby,rotateBy,NULL);
	Action* actions = Sequence::create(moveBy, jumpby, rotateBy, NULL);
	sprite->runAction(actions);

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