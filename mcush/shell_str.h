/* MCUSH designed by Peng Shulin, all rights reserved. */
#ifndef __SHELL_STR_H__
#define __SHELL_STR_H__

/* optimized string compare, use carefully
   1. only two shell_str_xxxxs can be compared
   2. shell_str_xxxs must be sorted.
 */
#define STRCMP(a,b)  ((unsigned int)(a)-(unsigned int)(b))


extern const char shell_str_0[];
extern const char shell_str_1[];
extern const char shell_str_address[];
extern const char shell_str_append[];
extern const char shell_str_argument[];
extern const char shell_str_ascii[];
extern const char shell_str_attach[];
extern const char shell_str_backup[];
extern const char shell_str_base_address[];
extern const char shell_str_check[];
extern const char shell_str_clear[];
extern const char shell_str_clr[];
extern const char shell_str_command[];
extern const char shell_str_compact[];
extern const char shell_str_compress[];
extern const char shell_str_connect[];
extern const char shell_str_connected[];
extern const char shell_str_count[];
extern const char shell_str_current[];
extern const char shell_str_data[];
extern const char shell_str_debug[];
extern const char shell_str_decompress[];
extern const char shell_str_deinit[];
extern const char shell_str_delay[];
extern const char shell_str_delete[];
extern const char shell_str_disable[];
extern const char shell_str_done[];
extern const char shell_str_enable[];
extern const char shell_str_end[];
extern const char shell_str_eol[];
extern const char shell_str_erase[];
extern const char shell_str_error[];
extern const char shell_str_file[];
extern const char shell_str_file_name[];
extern const char shell_str_file_not_exist[];
extern const char shell_str_file_size[];
extern const char shell_str_fill[];
extern const char shell_str_float[];
extern const char shell_str_format[];
extern const char shell_str_free[];
extern const char shell_str_frequency[];
extern const char shell_str_head[];
extern const char shell_str_help[];
extern const char shell_str_history[];
extern const char shell_str_id[];
extern const char shell_str_idle[];
extern const char shell_str_index[];
extern const char shell_str_index_from_0[];
extern const char shell_str_info[];
extern const char shell_str_init[];
extern const char shell_str_input[];
extern const char shell_str_int[];
extern const char shell_str_invalid[];
extern const char shell_str_invert[];
extern const char shell_str_io[];
extern const char shell_str_length[];
extern const char shell_str_list[];
extern const char shell_str_lock[];
extern const char shell_str_loop[];
extern const char shell_str_malloc[];
extern const char shell_str_mcush[];
extern const char shell_str_message[];
extern const char shell_str_memory[];
extern const char shell_str_module[];
extern const char shell_str_mount[];
extern const char shell_str_ms[];
extern const char shell_str_msg[];
extern const char shell_str_name[];
extern const char shell_str_nil[];
extern const char shell_str_not_supported[];
extern const char shell_str_null[];
extern const char shell_str_number[];
extern const char shell_str_off[];
extern const char shell_str_offset[];
extern const char shell_str_on[];
extern const char shell_str_option[];
extern const char shell_str_output[];
extern const char shell_str_parameter[];
extern const char shell_str_path[];
extern const char shell_str_path_name[];
extern const char shell_str_pattern[];
extern const char shell_str_pin[];
extern const char shell_str_port[];
extern const char shell_str_port_bit[];
extern const char shell_str_pulldown[];
extern const char shell_str_pullup[];
extern const char shell_str_query[];
extern const char shell_str_range[];
extern const char shell_str_read[];
extern const char shell_str_readme[];
extern const char shell_str_realloc[];
extern const char shell_str_reboot[];
extern const char shell_str_remount[];
extern const char shell_str_reset[];
extern const char shell_str_restart[];
extern const char shell_str_run[];
extern const char shell_str_scan[];
extern const char shell_str_script[];
extern const char shell_str_search[];
extern const char shell_str_set[];
extern const char shell_str_setting[];
extern const char shell_str_signature[];
extern const char shell_str_start[];
extern const char shell_str_status[];
extern const char shell_str_stop[];
extern const char shell_str_tail[];
extern const char shell_str_test[];
extern const char shell_str_test_mode[];
extern const char shell_str_time[];
extern const char shell_str_timeout[];
extern const char shell_str_toggle[];
extern const char shell_str_total[];
extern const char shell_str_type[];
extern const char shell_str_uint[];
extern const char shell_str_umount[];
extern const char shell_str_unlock[];
extern const char shell_str_update[];
extern const char shell_str_usage[];
extern const char shell_str_used[];
extern const char shell_str_value[];
extern const char shell_str_version[];
extern const char shell_str_warn[];
extern const char shell_str_warning[];
extern const char shell_str_width[];
extern const char shell_str_write[];

#endif
