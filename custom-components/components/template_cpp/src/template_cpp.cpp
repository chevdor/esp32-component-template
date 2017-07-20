#include "template_cpp.h"

int SampleMath::cpp_add(int number1, int number2) {
    return number1 + number2;
}

// Note: No static keyword below.
int SampleMath::s_add(int n1, int n2) {
    return n1 + n2;
}
