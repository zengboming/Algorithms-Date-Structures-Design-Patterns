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
    
    if ( !Layer::init() )
    {
        return false;
    }
	auto UI = cocostudio::GUIReader::getInstance()->widgetFromJsonFile("HelloUI_1.ExportJson");
	UI->setPosition(Point(100, 100));
	this->addChild(UI);

	//��ȡ�ؼ�����
	Button* xrBtn = (Button*)Helper::seekWidgetByName(UI, "xiaoruoBtn");
	m_xiaoruoImg = (ImageView*)Helper::seekWidgetByName(UI, "xiaoruoImg");
	//��Ӱ�ť��������
	xrBtn->addTouchEventListener(this, toucheventselector(HelloWorld::onClick));
    
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

void HelloWorld::onClick(Ref*,TouchEventType type)
{
	switch (type)
	{
	case TouchEventType::TOUCH_EVENT_BEGAN://�����¼���ʼ���������£�
		break;
	case TouchEventType::TOUCH_EVENT_MOVED://����֮�󣬽����ƶ�����ʱ����
		break;
	case TouchEventType::TOUCH_EVENT_ENDED://����֮��Ȼ���ɿ�ʱ����
		if (m_xiaoruoImg->isVisible())
		{
			m_xiaoruoImg->setVisible(false);
		}
		else
		{
			m_xiaoruoImg->setVisible(true);
		}
		break;
	case TouchEventType::TOUCH_EVENT_CANCELED://��ΪһЩ����������ж�ʱ����
		break;
	}
}