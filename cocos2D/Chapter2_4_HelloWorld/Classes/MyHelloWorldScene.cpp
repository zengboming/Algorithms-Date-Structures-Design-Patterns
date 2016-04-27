#include "MyHelloWorldScene.h"

Scene* MyHelloWorldScene::createScene() {
    /* ����һ���������� */
    auto scene = CCScene::create();

    /* ����MyHelloWorldScene���� */
    auto layer = MyHelloWorldScene::create();

    /* ���MyHelloWorldScene�������� */
    scene->addChild(layer);

    return scene;
}

bool MyHelloWorldScene::init() {
    /* ���´����Ǵ���һ�����鲢����ӵ������� */
    auto sprite = Sprite::create("CloseNormal.png");
    sprite->setPosition(ccp(300, 300));
    this->addChild(sprite);
    return true;
}