#include <iostream>
#include "User.h"

    // Constructor
    User::User() {
    }

    // Destructor
    User::~User() {
    }

    void User::setName(const string& userName) {
        name = userName;
    }
    //print name function
    void User::printName() const {
        cout << "Your name is enrolled successfully, " << name << "." << endl;
    }
    //add item function
    void User::addItem(const string& item, int count) {
        itemMap[item] += count;
    }
    //remove item function
    void User::removeItem(const string& item, int count) {
        if (hasItem(item)) {
            itemMap[item] -= count;
            if (itemMap[item] <= 0) {
                itemMap.erase(item);  //Remove the item if the count is less than or equal to 0
            } //erase�Լ�(std::map���� ����)
        }
    }
    //show user's items function
    void User::showItems() const {
        cout << "User's items: ";
        for (const auto& pair : itemMap) { //pair��ü
            cout << pair.first << "(" << pair.second << ") ";
        }
        cout << endl;
    }

    //check the user has a item
    bool User::hasItem(const string& item) const {
        //find�Լ�(std::map���� ����) : map���� Ű �˻�
        //Ű ���� ���ϸ� end() ��ȯ 
        return itemMap.find(item) != itemMap.end();
    } 

    //check how many items the user has
    int User::getItemCount(const string& item) const {
        if (hasItem(item)) { //�ִ��� ���� Ȯ�� 
            return itemMap.at(item); //std::map���� Ű(������ ����)�� �ش��ϴ� ���� ��ȯ
        }
        return 0; //false�� ��� 
    }
