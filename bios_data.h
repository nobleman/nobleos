#ifndef BIOS_DATA_H

#include "primitives.h"

extern int test1_var;
void bda_init();

struct bios_data // structur with all BIOS data
{
    u16int hw_com_addr [3] ; // zero if none
    u16int hw_lpt_addr [3] ; // zero if none

    u16int hw_devices ;

    u8int interrupt_flag;
    u16int mem_size; // mem size in KB
    u16int adapter_mem_size; 

    u8int kbd_flags ;// 1 - up 0 - down
    u8int kbd_num_keypad;
    u16int *kbd_word_next ;
    u16int *kbd_word_last ;
    u8int kbd_buffer [32] ;

    u8int fl_calibration;
    u8int fl_motor_status;
    u8int fl_motor_timeout;

    u8int fl_reg_1 ;
    u8int fl_reg_2 ;

    u8int fl_contr_cylinder_num;
    u8int fl_contr_head_num;
    u8int fl_contr_sector_num;
    u8int fl_contr_written_byte_num ;

    u8int video_mode_settings;
    u16int video_num_or_col;
    u16int video_sizeof_page;
    u16int video_page_adr_rel_to_start;

    u16int video_cursor_pos[6];

    u16int video_cursor_shape ;
    u8int video_active_page ;
    u16int video_adressof_GPU ;
    u8int video_gpu_register ;
    u8int video_palette ;
    u16int video_gpu_rom_offset ;
    u16int video_gpu_rom_adress ;

    u8int hw_last_interrupt ;
    u32int hw_interrupt1ah_counter;

    u8int hw_timer24_flag ;
    u8int kbd_ctrl_break_flag ;
    u16int hw_soft_reset_flag ;

    u8int hd_last_operation_stat ;
    u8int hd_num ;
    u8int hd_control_byte ;
    u8int hd_offset_io ;

    
    u8int hw_lpt_timeout [3] ;
    u8int hw_com_timeout [3] ;

    u16int kbd_buf_start ;
    u16int kbd_buf_end ;
   
    u8int video_row_num ;
    u16int video_scan_per_character ;
    u8int video_display_adapt_opt ;
    u8int video_display_adast_switch ;
    u8int video_vga_flags [1] ;

    u8int fl_conf ;  

    u8int hd_controler_state ;

    u8int hd_drive_err ;
    u8int hd_drive_task ;
    u8int hd_drive_info ;

    u8int fl_drive_information;
    u8int fl_state[1];
    u8int fl_operation_state[1] ;
    u8int fl_current_cylinder[1];

    u8int kbd_stat_flag[2];
    u32int hw_offset_wait_flag;
    u32int hw_wait_count;
    u8int hw_lan_bytes[7];
    u32int video_control_block;
    u8int reserved [68];
    u8int intra_app_comunication_area [16];


} __attribute__((packed)) ;

#endif
