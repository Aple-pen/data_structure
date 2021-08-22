
/**
 * 동적할당
 * calloc, malloc
 **/

#include <iostream>
#include <stdlib.h>

int main(){
    int *pt;
    int index;

    //요소 개수 입력
    std::cout << "input index : ";
    std::cin >> index;
    //요소 개수만큼 동적 할당
    pt = (int *)calloc(index,sizeof(int));

    if(pt == NULL){
        puts("fail");
    }else{
        std::cout <<"input : " << index;
    
        //동적할당된 각 배열에 정수 입력
        for(int i=0;i<index;i++){
            std::cout<<"a[" << i << "] : ";
            std::cin>>pt[i];
        }
        puts("==========================");

        for(int i = 0;i<index;i++){
            std::cout << "a[" << i << "] : " << pt[i] <<std::endl;
        }
        free(pt); //메모리 해제
    }
}



