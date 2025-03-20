#include <stdio.h>
int main() {
    printf("%llu\n", sizeof(animdata_frames[0].joint_pos) / sizeof(animdata_frames[0].joint_pos[0]));
}
