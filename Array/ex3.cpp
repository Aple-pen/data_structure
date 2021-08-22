#include <iostream>
#include <stdlib.h>

// //배열 요소의 최댓값 구하기 알고리즘
// int main(){
//     int a[3] = {4,2,3};
//     int max = a[0];

//     //for 문을 쓰지 않으면 다음과 같음
//     // if(a[1] > max) max = a[1];
//     // if(a[2] > max) max = a[2];

//     //for 문으로 간략히
//     for(int i=1;i<sizeof(a)/sizeof(int);i++){
//         if(a[i] > max) max = a[i];
//     }

//     std::cout << "max is " << max <<std::endl;
// }


//maxof 함수를 만들어 배열요소의 최댓값 구하기


int maxof(const int array[],int n){ //const 를 붙임으로서 읽기만 가능하게 만들어줌.
    int max = array[0];
    for(int i = 1;i<n;i++){
        if(array[i] > max) max = array[i];
    }
    return max;
}

int main(){
    int *pt;
    int index;

    std::cout << "how many people : ";
    std::cin >> index;

    pt = (int *)calloc(index,sizeof(int));
    
    if(pt == NULL){
        puts("fail");
    }else{
        std::cout << "input people's height : " <<std::endl;
        for(int i=0;i<index;i++){
            std::cout << "pt[" <<i<<"] : ";
            std::cin >> pt[i];
        }
        std::cout << "max height is : " << maxof(pt,index);
        free(pt);
    }
}