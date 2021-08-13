#include "frame_buffer.h"
#include "serial_port.h"
#include "memory_seg.h"


    
    int main(){

           char ptr2[] = "Welcome Pasan";
   
    
    serial_write(0x3F8, ptr2, 14);
    fb_write(ptr2, 14);
    segments_install_gdt();
    
    }
