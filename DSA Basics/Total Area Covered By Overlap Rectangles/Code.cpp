#include <bits/stdc++.h> 
long long getArea(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    long long area1 = (x2 - x1) * (y1 - y2);
    
    // Calculate area of rectangle 2
    long long area2 = (x4 - x3) * (y3 - y4);
    
    // Calculate overlapping area
    long long overlapWidth = max(0, min(x2, x4) - max(x1, x3));
    long long overlapHeight = max(0, min(y1, y3) - max(y2, y4));
    long long overlapArea = overlapWidth * overlapHeight;
    
    // Calculate net area
    long long netArea = area1 + area2 - overlapArea;
    
    return netArea;
}
