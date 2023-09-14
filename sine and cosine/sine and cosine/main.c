//
//  main.c
//  sine and cosine
//
//  Created by Anastasia 14/09/2023.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    double angle; //angel in radians
    
    printf("---SINE AND COSINE TABLE---\n");
    for (angle = 0; angle <= 1; angle += 0.1){
        double sine = sin(angle);
        double cosine = cos(angle);
        printf("angle: %lf  sin: %lf  cos: %lf\n", angle, sine, cosine);
    }
    printf("---END OF THE TABLE---\n");
    
    return 0;
}
