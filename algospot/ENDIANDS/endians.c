//
//  main.c
//  algospot
//
//  Created by Seungyong Lee on 2016. 7. 29..
//  Copyright © 2016년 Seungyong Lee. All rights reserved.
//

#include <stdio.h>

struct bytes {
    char byte1;
    char byte2;
    char byte3;
    char byte4;
};

int main(void) {
    
    int valueCount=0;
    int i=0;
    
    scanf("%d", &valueCount);
    
    for(i=0; i<valueCount; i++)
    {
        unsigned int bnumber;
        unsigned int lnumber;
        struct bytes *bregister = (struct bytes*)&bnumber;
        struct bytes *lregister = (struct bytes*)&lnumber;
    
        scanf("%u", &bnumber);
        
        lregister->byte1 = bregister->byte4;
        lregister->byte2 = bregister->byte3;
        lregister->byte3 = bregister->byte2;
        lregister->byte4 = bregister->byte1;
    
        printf("%u\n",lnumber);
    }
    return 0;
}