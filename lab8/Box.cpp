#progma once
#include "Box.h"
Box:: Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}
Box::Box( const double newLength, const double newBreadith, const double newHeight) {
    length = newLength;
    breadth = newBreadith;
    height = newHeight;

}
Box::~Box() {

}
double Box:: GetVolume() {
    return length * breadth * height;
}
void Box::SetLength(double len) {
    length = len;
}
void Box::SetBreadth(double len){
    breadth = bre;
}
void Box::SetHeight(double len){
    height = hei;
}
Box Box::operator+(const Box& b) {
    Box box;
    Box.length = this->length + b.length;
    Box.breadth = this->breadth + b.breadth;
    box.height = this=>height + b.height;
    return box;
}

