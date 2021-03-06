#ifndef RLANG_INTERNAL_ENV_H
#define RLANG_INTERNAL_ENV_H


void r_env_unbind_anywhere(sexp* env, sexp* sym);

void r_env_unbind_anywhere_names(sexp* env, sexp* names);
void r_env_unbind_anywhere_c_string(sexp* env, const char* name);
void r_env_unbind_anywhere_c_strings(sexp* env, const char** names, r_ssize n);

void r_env_unbind_names(sexp* env, sexp* names);
void r_env_unbind_c_string(sexp* env, const char* name);
void r_env_unbind_c_strings(sexp* env, const char** strings, r_ssize n);


#endif
