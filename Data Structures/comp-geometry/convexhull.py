from math import atan2, sqrt, pi

def polar_angle(p1,p2):
    if p1[1] == p2[1]:
        return -pi
    dy = p1[1] - p2[1]
    dx = p1[0] - p2[0]
    return atan2(dy,dx)

def dist(p1,p2):
    x1,y1,x2,y2 = *p1, *p2
    return (sqrt((y2-y1)**2 + (x2-x1)**2))

def orientation(p0,p1,p2):
    x1,y1,x2,y2,x3,y3 = *p0,*p1,*p2
    slope_comp = (y3-y2)*(x2-x1) - (y2-y1)*(x3-x2)
    
    if slope_comp > 0: return 1
    elif slope_comp < 0: return -1
    elif slope_comp == 0: return 0

def graham_scan(points):
    p0 = min(points, key=lambda p: (p[1], p[0]))
    points.sort(key=lambda p: (polar_angle(p0,p), dist(p0,p)))
    hull = []
    for i in range(len(points)):
        while len(hull) >= 2 and orientation(hull[-2], hull[-1], points[i]) != 1:
            print(f"Checking: {hull}")
            hull.pop()
        print(f"Checked:{hull}")
        hull.append(points[i])
    return hull



points = [[1,2],[2,2],[4,2]]
hull = graham_scan(points=points)
print(hull)