#include "Exercise_04_stack.h"

Stack::Stack(int n){
    pitems = new Item[n];
    size = 0;
    top = 0;
}

Stack::Stack(const Stack & st){
    pitems = new Item[st.size];
    for(int i=0; i<st.size; i++){
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
}

Stack::~Stack(){
    if(pitems){
        delete[] pitems;
    }
}

bool Stack::isempty() const{
    return top == 0;
}

bool Stack::isfull() const{
    return top == MAX;
}

bool Stack::push(const Item & item){
    if(top < MAX){
        pitems[top++] = item;
        size++;
        return true;
    }else{
        return false;
    }
}

bool Stack::pop(Item & item){
    if(top > 0){
        item = pitems[top--];
        size--;
        return true;
    }else{
        return false;
    }
}

Stack & Stack::operator=(const Stack & st){
    if(this == &st){
        return *this;
    }
    delete[] pitems;
    pitems = new Item[st.size];
    for(int i=0; i<st.size; i++){
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
    return *this;
}