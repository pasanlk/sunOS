 #include "frame_buffer.h"
    #include "serial_port.h"
    #include "io.h"
    #include "memory_seg.h"
    #include "interrupts.h"
    #include "keyboard.h"
    #include "pic.h"
    

    void kmain()
    {

       //char arr[] = "Welcome Pasan";
       //fb_move_cursor(6*80);
       //fb_write(arr, 14);
       //serial_write(arr, 14);
       segments_install_gdt();
       interrupts_install_idt();

    }
