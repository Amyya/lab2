#include <string>
#include "bmi.h"

void BMI::setHeight(int height){
    h_value = height;
}
void BMI::setWeight(int weight){
    w_value = weight;
}
float BMI::getBmi(){
    float B = 0;
    B = w_value/((h_value/100.)*(h_value/100.));
    return B;
}
string BMI::getCategory(float B){
    string C;
    if(B < 15)
        C = "Very severely underweight";
    else if(B>=15.0 && B<16.0)
        C = "Severely underweight";
    else if(B>=16.0 && B<18.5)
        C = "Underweight";
    else if(B>=18.5 && B<25)
        C = "Normal";
    else if(B>=25 && B<30)
        C = "Overweight";
    else if(B>=30 && B<35)
        C = "Obese Class I (Moderately obese)";
    else if(B>=35 && B<40)
        C = "Obese Class II (Severely obese)";
    else if(B >= 40)
        C = "Obese Class III (Very severely obese)";
    return C;
}
