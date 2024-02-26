# 1 "d:\\loadrunnerscripts\\assessment\\assessment_solu\\loadview_scripts\\\\combined_LoadView_Scripts.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\loadrunnerscripts\\assessment\\assessment_solu\\loadview_scripts\\\\combined_LoadView_Scripts.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\loadrunnerscripts\\assessment\\assessment_solu\\loadview_scripts\\\\combined_LoadView_Scripts.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = ".";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 10 "globals.h" 2


 
 


# 3 "d:\\loadrunnerscripts\\assessment\\assessment_solu\\loadview_scripts\\\\combined_LoadView_Scripts.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&osver=10.0.19045&devicefamily=desktop&installdate=1666087002&clientversion=121.0.2277.128&experimentationmode=2&scpguard=1&scpfull=0&scpver=15", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("pglt-edgeChromium-ntp=41; DOMAIN=ntp.msn.com");

	web_add_cookie("pglt-edgeChromium-dhp=41; DOMAIN=ntp.msn.com");

	web_add_cookie("sptmarket=en-US||in|en-in|en-in|en||RefA=2F1E55C27B004195A5112589929F7010.RefC=2023-02-13T11:32:59Z; DOMAIN=ntp.msn.com");

	web_add_cookie("USRLOC=CLOC=LAT=12.9378|LON=77.547|A=10476|TS=240224042455|SRC=I&BID=MjQwMjI0MDk1NDU1XzQ2YzJjNGFkMGMyYTllYWFkYmE1OTNjZjRhNjI1NGI2MTYyNDYxZWZlMTcxZmJiN2RkMjAwZGQ0MmRhNDZmOTE=; DOMAIN=ntp.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=ntp.msn.com");

	web_add_cookie("MUID=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=ntp.msn.com");

	web_add_cookie("MicrosoftApplicationsTelemetryDeviceId=15705868-5fea-4f69-93e0-36fa8e3e9a44; DOMAIN=ntp.msn.com");

	web_add_cookie("MUIDB=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=ntp.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=ntp.msn.com");

	web_add_cookie("MSFPC=GUID=ffc904e9e1d449d7b57b4283d216deb5&HASH=ffc9&LV=202402&V=4&LU=1708663980347; DOMAIN=ntp.msn.com");

	web_add_cookie("msaoptout=0; DOMAIN=ntp.msn.com");

	web_add_cookie("ai_session=qSNHjatYfWN6GtKPaXmS6R|1708748679983|1708748679983; DOMAIN=ntp.msn.com");

	web_url("ntp", 
		"URL=https://ntp.msn.com/edge/ntp?locale=en-US&title=New%20tab&dsp=1&sp=Bing&startpage=1&PC=U531&prerender=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("demo", 
		"URL=https://www.loadview-testing.com/demo/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=121.0.2277.128&lang=en-US&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("report", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("report_2", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":7,\"body\":{\"elapsed_time\":11354,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/work/api/v2/tenant/my/settingswithflights?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\""
		"}]", 
		"LAST");

	web_custom_request("favicon.ico", 
		"URL=https://assets.msn.com/statics/icons/favicon.ico", 
		"Method=HEAD", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t7.inf", 
		"LAST");

	web_url("inlinks.js", 
		"URL=https://jscloud.net/x/26432/inlinks.js", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	 

	web_url("BBGeThK", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/BBGeThK", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("BB1gzN7f", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/BB1gzN7f", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("AA1cD26x", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/AA1cD26x", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("USRLOC=CLOC=LAT=12.9378|LON=77.547|A=10476|TS=240224042455|SRC=I&BID=MjQwMjI0MDk1NDU1XzQ2YzJjNGFkMGMyYTllYWFkYmE1OTNjZjRhNjI1NGI2MTYyNDYxZWZlMTcxZmJiN2RkMjAwZGQ0MmRhNDZmOTE=; DOMAIN=assets.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=assets.msn.com");

	web_add_cookie("MUID=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=assets.msn.com");

	web_add_cookie("MUIDB=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=assets.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=assets.msn.com");

	web_url("ntp_2", 
		"URL=https://assets.msn.com/service/news/feed/pages/ntp?User=m-3FB288A77D7E6FC13A379A107C2C6E33&activityId=03268357-B8FD-48AD-A89F-9D2048D6B1BB&apikey=0QfOX3Vn51YCzitbLaRkTTBadtWpgTN8NZLW0C1SEM&audienceMode=adult&caller=bgtask&cm=en-in&column=c3&contentType=article,video,slideshow,webcontent&dhp=1&duotone=true&edgExpMask=131072&infopaneCount=17&it=app&memory=8&newsSkip=0&newsTop=48&ocid=anaheim-ntp-feeds&overlay=0&pgc=41&prerender=1&promotion=1697179646278_l_1_2&scn=APP_ANON&timeOut=2000&vpSize="
		"1232x572&wposchema=byregion", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("AA2qT4f", 
		"URL=https://assets.msn.com/breakingnews/v1/cms/api/amp/article/AA2qT4f", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("Rewards", 
		"URL=https://assets.msn.com/service/News/Users/me/Rewards?apikey=1hYoJsIRvPEnSkk0hlnJF2092mHqiz7xFenIFKa9uc&activityId=03268357-B8FD-48AD-A89F-9D2048D6B1BB&ocid=rewards-peregrine&cm=en-in&it=app&user=m-3FB288A77D7E6FC13A379A107C2C6E33&scn=APP_ANON&version=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("w", 
		"URL=https://telemetry.jivosite.com/w", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"event\":\"loader_loaded\",\"widget_id\":\"5krV1CifaF\",\"t\":1708749725821,\"param1\":\"117.3.0\",\"shard\":\"main\"}", 
		"LAST");

	web_custom_request("collect", 
		"URL=https://stats.g.doubleclick.net/g/collect?v=2&tid=G-4GPKJR6BK2&cid=37313771.1708749727&gtm=45je42l0v889420970z8868681018za220&aip=1&dma=0&gcd=13l3l3l3l1&npa=0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_custom_request("collect_2", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=335627939&t=pageview&_s=1&dl=https%3A%2F%2Fwww.loadview-testing.com%2Fdemo%2F&ul=en-us&de=UTF-8&dt=Live%20Demos%20-%20LoadView%20Performance%20Engineering%20Team&sd=24-bit&sr=1280x720&vp=1257x606&je=0&_u=YADAAUABAAAAACAAI~&jid=1086117748&gjid=398144134&cid=37313771.1708749727&tid=UA-4173828-16&_gid=1623097521.1708749729&_r=1&gtm=457e42l0za220&gcd=13l3l3l3l1&dma=0&jsscut=1&z=1130172358", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"LAST");

	web_url("5krV1CifaF", 
		"URL=https://node-ya-9.jivosite.com/widget/status/838424/5krV1CifaF?rnd=0.6998953374747459", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

 
 

	

	web_url("config.json", 
		"URL=https://edge-consumer-static.azureedge.net/mouse-gesture/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tpurl\thttps://www.loadview-testing.com/demo/\n", 
		"IsBinary=0", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tptitle\tLive Demos - LoadView Performance Engineering Team\n", 
		"IsBinary=0", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tnavcount\t1\n", 
		"IsBinary=0", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tvisible\ttrue\n", 
		"IsBinary=0", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tstatus\ton_site\n", 
		"IsBinary=0", 
		"LAST");

 
 
 
 
 
 
 
 
 

	web_set_sockets_option("TLS_SNI", "1");

	return 0;
}
# 4 "d:\\loadrunnerscripts\\assessment\\assessment_solu\\loadview_scripts\\\\combined_LoadView_Scripts.c" 2

# 1 "Action.c" 1
Action()
{

	 

	lr_think_time(18);

	web_websocket_send("ID=0", 
		"Buffer=.", 
		"IsBinary=0", 
		"LAST");

	 

	lr_think_time(7);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_add_cookie("_vwo_uuid_v2=D1920CE77D7B5E88DB2D0ADD3905DA59E|5381605328224fc8672f95c87f3b90be; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_omappvp=PffaYbnHg1iAfKcxzDbxPYOScTJQnJHtWLvs6LjT4FWe8xCFLSu0ypK87XZ9rNQbNEQVPMgKarZ65Ln7H8NYEXYtxt9yeyNY; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_omappvs=1708749725738; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_ga_4GPKJR6BK2=GS1.1.1708749726.1.0.1708749726.60.0.0; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_jsuid=3917692257; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_heatmaps_g2g_100936456=yes; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_ga=GA1.2.37313771.1708749727; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_gid=GA1.2.1623097521.1708749729; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_gat_gtag_UA_4173828_16=1; DOMAIN=www.loadview-testing.com");

	web_url("east", 
		"URL=https://www.loadview-testing.com/demo/east/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.loadview-testing.com/demo/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	web_websocket_close("ID=0", 
		"Code=1001", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_add_cookie("__cf_bm=l3yVrdbTaVBtIQO1BSlcSLTa708F8zXCwXDSKPrzuGs-1708750427-1.0-AakUxBO2tniEpomM+ulKf/k5Bvh3PC7lxTR2BBsRCmIhjz5LqTk/3Ha1IsAR8Fw0u4LUPiZEB9SAInBIwhujPd0=; DOMAIN=calendly.com");

 
	web_reg_save_param_ex(
		"ParamName=cookie",
		"LB=__cfruid=",
		"RB=;",
		"SEARCH_FILTERS",
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/discovery-call*",
		"LAST");

	web_url("discovery-call", 
		"URL=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("__cfruid={cookie}; DOMAIN=calendly.com");

	web_url("user", 
		"URL=https://calendly.com/api/booking/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("settings", 
		"URL=https://calendly.com/api/booking/settings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("request", 
		"URL=https://calendly.com/api/booking/request", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("experiments", 
		"URL=https://calendly.com/api/booking/experiments?event_type_uuid=6f018153-14f4-4cf0-848a-1c3472da7aae", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"LAST");

 
 
 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("range", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-02-24&range_end=2024-02-29&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(186);

 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_set_sockets_option("TLS_SNI", "1");

	web_url("range_2", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-03-01&range_end=2024-03-07&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-03&date=2024-02-29", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("range_3", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-03-08&range_end=2024-03-14&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02&date=2024-02-29", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("range_4", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-03-15&range_end=2024-03-21&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02&date=2024-02-29", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("range_5", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-03-22&range_end=2024-03-31&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02&date=2024-02-29", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

 
 
 
 
 
 
 
 

	 

	lr_think_time(27);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	lr_think_time(27);
	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	
 
 
 
 
 
 
 
 
	
	 
	
	 
	
	web_add_header("X-CSRF-Token","aBPe5qWhdJyJQHQ6KUEaW2PQ1q40Vd-VWgJxUAvxptL0I-0QCMps3VFdg7N5RbNYBWdqqW0-jZJCutB099G14A");
	 
	

	 
	web_custom_request("invitees", 
		"URL=https://calendly.com/api/booking/invitees", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call/2024-02-29T11:30:00+05:30?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02&date=2024-02-29", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"analytics\":{\"referrer_page\":null,\"invitee_landed_at\":\"2024-02-24T04:42:52.141Z\",\"browser\":\"Chrome 121\",\"device\":\"undefined Windows 10\",\"fields_filled\":5,\"fields_presented\":5,\"booking_flow\":\"v3\",\"seconds_to_convert\":629},\"embed\":{\"domain\":\"www.loadview-testing.com\",\"type\":\"Inline\",\"hide_details\":false,\"color_customization\":false},\"event\":{\"start_time\":\"2024-02-29T11:30:00+05:30\",\"location_configuration\":{\"location\":\"\",\"phone_number\":\"\","
		"\"additional_info\":\"\"},\"guests\":{}},\"event_fields\":[{\"id\":72361701,\"name\":\"Company Name\",\"format\":\"string\",\"required\":true,\"position\":0,\"answer_choices\":null,\"include_other\":false,\"value\":\"xyz\"},{\"id\":72361702,\"name\":\"Phone Number\",\"format\":\"phone_number\",\"required\":true,\"position\":1,\"answer_choices\":null,\"include_other\":false,\"value\":\"+91 98765 43210\",\"extension\":null,\"isValid\":true,\"countryCode\":\"in\"},{\"id\":72361703,\"name\":\"Product "
		"of Interest\",\"format\":\"choices_many\",\"required\":true,\"position\":2,\"answer_choices\":[\"Monitoring\",\"LoadView\"],\"include_other\":false,\"value\":\"Monitoring\"},{\"id\":72361060,\"name\":\"Please share anything that will help prepare for our meeting.\",\"format\":\"text\",\"required\":false,\"position\":3,\"answer_choices\":null,\"include_other\":false,\"value\":\"\"},{\"id\":72361704,\"name\":\"Do you have a current trial account?\",\"format\":\"choices_one\",\"required\":true,\""
		"position\":4,\"answer_choices\":[\"Yes\",\"No\"],\"include_other\":false,\"value\":\"No\"}],\"event_type_uuid\":\"6f018153-14f4-4cf0-848a-1c3472da7aae\",\"invitee\":{\"timezone\":\"Asia/Calcutta\",\"time_notation\":\"12h\",\"full_name\":\"shilpa\",\"email\":\"shilpac@gmail.com\"},\"payment_token\":{},\"recaptcha_token\":null,\"single_use_slug\":null,\"tracking\":{\"fingerprint\":\"d048220ce3e67a77913e6a1bba253c07\"}}", 
		"LAST");

	return 0;
}
# 5 "d:\\loadrunnerscripts\\assessment\\assessment_solu\\loadview_scripts\\\\combined_LoadView_Scripts.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{

	 

	web_add_cookie("_omappvs=1708749870220; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_ga_4GPKJR6BK2=GS1.1.1708749726.1.1.1708750056.60.0.0; DOMAIN=www.loadview-testing.com");

	lr_think_time(40);

	web_url("www.loadview-testing.com", 
		"URL=https://www.loadview-testing.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.loadview-testing.com/demo/east/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 6 "d:\\loadrunnerscripts\\assessment\\assessment_solu\\loadview_scripts\\\\combined_LoadView_Scripts.c" 2

