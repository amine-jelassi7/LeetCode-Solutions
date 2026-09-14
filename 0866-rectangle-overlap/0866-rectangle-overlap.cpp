class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        /*
        if((rec1[0]<rec2[0] && rec1[0]> rec2[1])|| (rec1[0]>rec2[0] && rec1[0]< rec2[1])) return true;
        if((rec1[1]<rec2[1] && rec1[1]> rec2[3])|| (rec1[1]>rec2[1] && rec1[1]< rec2[3])) return true;
        if((rec2[1]<rec1[1] && rec2[1]> rec1[3])|| (rec2[1]>rec1[1] && rec2[1]< rec1[3])) return true;
        if((rec2[1]<rec1[1] && rec2[1]> rec1[3])|| (rec2[1]>rec1[1] && rec2[1]< rec1[3])) return true;
        return false;
        */

        int x1 = rec1[0];
        int y1 = rec1[1];
        int x2 = rec1[2];
        int y2 = rec1[3];

        int a1 = rec2[0];
        int b1 = rec2[1];
        int a2 = rec2[2];
        int b2 = rec2[3];

        if((a1>=x2)||(a2<=x1)||(b2<=y1)||(b1>=y2)) return false;
        return true;
    }
};