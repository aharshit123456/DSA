#include <iostream>
#include <vector>

using namespace std;
/*
A convex hull is the smallest convex polygon that contains a given set of points. It is a useful concept in computational geometry and has applications in various fields such as computer graphics, image processing, and collision detection.

A convex polygon is a polygon in which all interior angles are less than 180 degrees. A convex hull can be constructed for any set of points, regardless of their arrangement.*/

 


// Orientation function
/*
comparing two slopes we get the orientation of the p3 wrt to line p1p2

d(p32)>d(p12) -> cc
d(p32)<d(p12) -> clock
d(32)=d(12) -> collinear



*/

// Polar angle, arctan2

void graham_scan(vector<int,int> points[]){
    //choosing minimum point for initiating
    vector<int,int> p0 = min(points);
    // sorting based on points
    points.sort();

}

vector<int,int> min(vector<int,int> points[]){
    vector<int,int> min_point = points[0];

    for(int i = 0; i < points->size(); i++){
        if (points[i] > min_point) min_point = points[i];
    }

    return min_point;
}

void main(){


// Sort points

// Accept or Reject Points


}