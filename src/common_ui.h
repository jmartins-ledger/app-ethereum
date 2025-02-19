#ifndef _COMMON_UI_H_
#define _COMMON_UI_H_

#include <stdbool.h>

void ui_idle(void);
void ui_warning_contract_data(void);
void ui_display_public_eth2(void);
void ui_display_privacy_public_key(void);
void ui_display_privacy_shared_secret(void);
void ui_display_public_key(void);
void ui_display_sign(void);
void ui_sign_712_v0(void);
void ui_display_stark_public(void);
void ui_confirm_selector(void);
void ui_confirm_parameter(void);
void ui_stark_limit_order(void);
void ui_stark_unsafe_sign(void);
void ui_stark_transfer(bool selfTransfer, bool conditional);

#include "ui_callbacks.h"
#include <string.h>

#endif  // _COMMON_UI_H_