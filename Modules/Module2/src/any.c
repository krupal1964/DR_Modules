
/* Author: Krupal Vachhani(166883)
 * Created: 10 Feb ,2025
 */

// Header Files
#include "../include/header2.h"
#include <stdint.h>

int any(const char s1[],int length_s1,const char s2[],int length_s2){
        uint8_t i,j;
        for(i=0;i<length_s1;i++){
                for(j=0;j<length_s2;j++){
                        if(s1[i]==s2[j]){
                                return i;
                        }
                }
        }
        return -1;
}
