//
//  main.c
//  algospot
//
//  Created by Seungyong Lee on 2016. 7. 29..
//  Copyright © 2016년 Seungyong Lee. All rights reserved.
//

#include <stdio.h>

struct Dots {
    int x;
    int y;
};

int main(void) {
    
    int caseCount=0;
    
    scanf("%d", &caseCount);
    
    for(int i=0; i<caseCount; i++)
    {
        struct Dots rectDot[3];
        
        for(int j=0; j<3; j++)
        {
            scanf("%d %d", &rectDot[j].x, &rectDot[j].y);
        }
        
        if(rectDot[0].x == rectDot[1].x)
        {
            rectDot[3].x = rectDot[2].x;
        }
        else if(rectDot[0].x == rectDot[2].x)
        {
            rectDot[3].x = rectDot[1].x;
        }
        else if(rectDot[1].x == rectDot[2].x)
        {
            rectDot[3].x = rectDot[0].x;
        }
        
        
        if(rectDot[0].y == rectDot[1].y)
        {
            rectDot[3].y = rectDot[2].y;
        }
        else if(rectDot[0].y == rectDot[2].y)
        {
            rectDot[3].y = rectDot[1].y;
        }
        else if(rectDot[1].y == rectDot[2].y)
        {
            rectDot[3].y = rectDot[0].y;
        }
        
        printf("%d %d\n",rectDot[3].x, rectDot[3].y);
    }
    return 0;
}