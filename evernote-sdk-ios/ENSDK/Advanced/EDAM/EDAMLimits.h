/*
 * Copyright (c) 2017 by Evernote Corporation, All rights reserved.
 *
 * Use of the source code and binary libraries included in this package
 * is permitted under the following terms:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "ENTProtocol.h"
#import "ENTException.h"
#import "FATObject.h"

@interface EDAMLimitsConstants : NSObject 
+ (int32_t) EDAM_ATTRIBUTE_LEN_MIN;
+ (int32_t) EDAM_ATTRIBUTE_LEN_MAX;
+ (NSString *) EDAM_ATTRIBUTE_REGEX;
+ (int32_t) EDAM_ATTRIBUTE_LIST_MAX;
+ (int32_t) EDAM_ATTRIBUTE_MAP_MAX;
+ (int32_t) EDAM_GUID_LEN_MIN;
+ (int32_t) EDAM_GUID_LEN_MAX;
+ (NSString *) EDAM_GUID_REGEX;
+ (int32_t) EDAM_EMAIL_LEN_MIN;
+ (int32_t) EDAM_EMAIL_LEN_MAX;
+ (NSString *) EDAM_EMAIL_LOCAL_REGEX;
+ (NSString *) EDAM_EMAIL_DOMAIN_REGEX;
+ (NSString *) EDAM_EMAIL_REGEX;
+ (NSString *) EDAM_VAT_REGEX;
+ (int32_t) EDAM_TIMEZONE_LEN_MIN;
+ (int32_t) EDAM_TIMEZONE_LEN_MAX;
+ (NSString *) EDAM_TIMEZONE_REGEX;
+ (int32_t) EDAM_MIME_LEN_MIN;
+ (int32_t) EDAM_MIME_LEN_MAX;
+ (NSString *) EDAM_MIME_REGEX;
+ (NSString *) EDAM_MIME_TYPE_GIF;
+ (NSString *) EDAM_MIME_TYPE_JPEG;
+ (NSString *) EDAM_MIME_TYPE_PNG;
+ (NSString *) EDAM_MIME_TYPE_TIFF;
+ (NSString *) EDAM_MIME_TYPE_WAV;
+ (NSString *) EDAM_MIME_TYPE_MP3;
+ (NSString *) EDAM_MIME_TYPE_AMR;
+ (NSString *) EDAM_MIME_TYPE_AAC;
+ (NSString *) EDAM_MIME_TYPE_M4A;
+ (NSString *) EDAM_MIME_TYPE_MP4_VIDEO;
+ (NSString *) EDAM_MIME_TYPE_INK;
+ (NSString *) EDAM_MIME_TYPE_PDF;
+ (NSString *) EDAM_MIME_TYPE_DEFAULT;
+ (NSSet<NSString *> *) EDAM_MIME_TYPES;
+ (NSSet<NSString *> *) EDAM_INDEXABLE_RESOURCE_MIME_TYPES;
+ (NSSet<NSString *> *) EDAM_INDEXABLE_PLAINTEXT_MIME_TYPES;
+ (NSString *) EDAM_COMMERCE_SERVICE_EVERNOTE;
+ (NSString *) EDAM_COMMERCE_SERVICE_GOOGLE;
+ (NSString *) EDAM_COMMERCE_SERVICE_PAYPAL;
+ (NSString *) EDAM_COMMERCE_SERVICE_PAYPALRT;
+ (NSString *) EDAM_COMMERCE_SERVICE_GIFT;
+ (NSString *) EDAM_COMMERCE_SERVICE_TRIALPAY;
+ (NSString *) EDAM_COMMERCE_SERVICE_TRIAL;
+ (NSString *) EDAM_COMMERCE_SERVICE_GROUP;
+ (NSString *) EDAM_COMMERCE_SERVICE_BUNDLE;
+ (NSString *) EDAM_COMMERCE_SERVICE_POINTS;
+ (NSString *) EDAM_COMMERCE_SERVICE_CYBERSOURCE;
+ (NSString *) EDAM_COMMERCE_SERVICE_ANDROID;
+ (NSString *) EDAM_COMMERCE_SERVICE_AMAZON;
+ (NSString *) EDAM_COMMERCE_SERVICE_IPHONE;
+ (NSString *) EDAM_COMMERCE_SERVICE_IPHONE_SKITCH;
+ (NSString *) EDAM_COMMERCE_SERVICE_MAC;
+ (NSString *) EDAM_COMMERCE_SERVICE_BLACKBERRY;
+ (NSString *) EDAM_COMMERCE_SERVICE_BUSINESS;
+ (NSString *) EDAM_COMMERCE_SERVICE_VAULT_CC_ADYEN;
+ (NSString *) EDAM_COMMERCE_SERVICE_VAULT_CC_CYBERSOURCE;
+ (NSString *) EDAM_COMMERCE_SERVICE_VAULT_INVOICE;
+ (NSString *) EDAM_COMMERCE_SERVICE_VAULT_TRANSFER;
+ (NSString *) EDAM_COMMERCE_SERVICE_ADYEN_ALIPAY;
+ (NSString *) EDAM_COMMERCE_SERVICE_ADYEN_ALIPAY_AUTO_DEBIT;
+ (NSString *) EDAM_COMMERCE_SERVICE_ALIPAY_DIRECT;
+ (NSString *) EDAM_COMMERCE_SERVICE_ADYEN_BOKU;
+ (NSString *) EDAM_COMMERCE_SERVICE_ADYEN_CREDITCARD;
+ (NSString *) EDAM_COMMERCE_SERVICE_ADYEN_IDEAL;
+ (NSString *) EDAM_COMMERCE_SERVICE_ADYEN_GIROPAY;
+ (NSString *) EDAM_COMMERCE_SERVICE_ADYEN_SOFORT;
+ (NSString *) EDAM_COMMERCE_SERVICE_ADYEN_PAYPAL;
+ (NSString *) EDAM_COMMERCE_SERVICE_CASH_ON_DELIVERY;
+ (NSString *) EDAM_COMMERCE_SERVICE_REPLACEMENT;
+ (NSString *) EDAM_COMMERCE_SERVICE_RESELLER;
+ (NSString *) EDAM_COMMERCE_SERVICE_FRIEND_REFERRAL;
+ (NSString *) EDAM_COMMERCE_DEFAULT_CURRENCY_COUNTRY_CODE;
+ (int32_t) EDAM_SEARCH_QUERY_LEN_MIN;
+ (int32_t) EDAM_SEARCH_QUERY_LEN_MAX;
+ (NSString *) EDAM_SEARCH_QUERY_REGEX;
+ (int32_t) EDAM_HASH_LEN;
+ (int32_t) EDAM_USER_USERNAME_LEN_MIN;
+ (int32_t) EDAM_USER_USERNAME_LEN_MAX;
+ (NSString *) EDAM_USER_USERNAME_REGEX;
+ (int32_t) EDAM_USER_NAME_LEN_MIN;
+ (int32_t) EDAM_USER_NAME_LEN_MAX;
+ (NSString *) EDAM_USER_NAME_REGEX;
+ (uint16_t) EDAM_TAG_NAME_LEN_MIN;
+ (uint16_t) EDAM_TAG_NAME_LEN_MAX;
+ (NSString *) EDAM_TAG_NAME_REGEX;
+ (uint16_t) EDAM_NOTE_TITLE_LEN_MIN;
+ (uint16_t) EDAM_NOTE_TITLE_LEN_MAX;
+ (NSString *) EDAM_NOTE_TITLE_REGEX;
+ (int32_t) EDAM_NOTE_CONTENT_LEN_MIN;
+ (int32_t) EDAM_NOTE_CONTENT_LEN_MAX;
+ (int32_t) EDAM_APPLICATIONDATA_NAME_LEN_MIN;
+ (int32_t) EDAM_APPLICATIONDATA_NAME_LEN_MAX;
+ (int32_t) EDAM_APPLICATIONDATA_VALUE_LEN_MIN;
+ (int32_t) EDAM_APPLICATIONDATA_VALUE_LEN_MAX;
+ (int32_t) EDAM_APPLICATIONDATA_ENTRY_LEN_MAX;
+ (NSString *) EDAM_APPLICATIONDATA_NAME_REGEX;
+ (NSString *) EDAM_APPLICATIONDATA_VALUE_REGEX;
+ (int32_t) EDAM_NOTEBOOK_NAME_LEN_MIN;
+ (int32_t) EDAM_NOTEBOOK_NAME_LEN_MAX;
+ (NSString *) EDAM_NOTEBOOK_NAME_REGEX;
+ (int32_t) EDAM_NOTEBOOK_STACK_LEN_MIN;
+ (int32_t) EDAM_NOTEBOOK_STACK_LEN_MAX;
+ (NSString *) EDAM_NOTEBOOK_STACK_REGEX;
+ (int32_t) EDAM_PUBLISHING_URI_LEN_MIN;
+ (int32_t) EDAM_PUBLISHING_URI_LEN_MAX;
+ (NSString *) EDAM_PUBLISHING_URI_REGEX;
+ (NSSet<NSString *> *) EDAM_PUBLISHING_URI_PROHIBITED;
+ (int32_t) EDAM_PUBLISHING_DESCRIPTION_LEN_MIN;
+ (int32_t) EDAM_PUBLISHING_DESCRIPTION_LEN_MAX;
+ (NSString *) EDAM_PUBLISHING_DESCRIPTION_REGEX;
+ (int32_t) EDAM_SAVED_SEARCH_NAME_LEN_MIN;
+ (int32_t) EDAM_SAVED_SEARCH_NAME_LEN_MAX;
+ (NSString *) EDAM_SAVED_SEARCH_NAME_REGEX;
+ (int32_t) EDAM_USER_PASSWORD_LEN_MIN;
+ (int32_t) EDAM_USER_PASSWORD_LEN_MAX;
+ (NSString *) EDAM_USER_PASSWORD_REGEX;
+ (int32_t) EDAM_BUSINESS_URI_LEN_MAX;
+ (NSString *) EDAM_BUSINESS_MARKETING_CODE_REGEX_PATTERN;
+ (int32_t) EDAM_NOTE_TAGS_MAX;
+ (int32_t) EDAM_NOTE_RESOURCES_MAX;
+ (int32_t) EDAM_USER_TAGS_MAX;
+ (int32_t) EDAM_BUSINESS_TAGS_MAX;
+ (int32_t) EDAM_USER_SAVED_SEARCHES_MAX;
+ (int32_t) EDAM_USER_NOTES_MAX;
+ (int32_t) EDAM_BUSINESS_NOTES_MAX;
+ (int32_t) EDAM_USER_NOTEBOOKS_MAX;
+ (int32_t) EDAM_BUSINESS_NOTEBOOKS_MAX;
+ (int32_t) EDAM_USER_RECENT_MAILED_ADDRESSES_MAX;
+ (int32_t) EDAM_USER_MAIL_LIMIT_DAILY_FREE;
+ (int32_t) EDAM_USER_MAIL_LIMIT_DAILY_PREMIUM;
+ (int64_t) EDAM_USER_UPLOAD_LIMIT_FREE;
+ (int64_t) EDAM_USER_UPLOAD_LIMIT_PREMIUM;
+ (int64_t) EDAM_USER_UPLOAD_LIMIT_PLUS;
+ (int64_t) EDAM_USER_UPLOAD_SURVEY_THRESHOLD;
+ (int64_t) EDAM_USER_UPLOAD_LIMIT_BUSINESS;
+ (int64_t) EDAM_USER_UPLOAD_LIMIT_BUSINESS_PER_USER;
+ (int32_t) EDAM_NOTE_SIZE_MAX_FREE;
+ (int32_t) EDAM_NOTE_SIZE_MAX_PREMIUM;
+ (int32_t) EDAM_RESOURCE_SIZE_MAX_FREE;
+ (int32_t) EDAM_RESOURCE_SIZE_MAX_PREMIUM;
+ (int32_t) EDAM_USER_LINKED_NOTEBOOK_MAX;
+ (int32_t) EDAM_USER_LINKED_NOTEBOOK_MAX_PREMIUM;
+ (int32_t) EDAM_NOTEBOOK_BUSINESS_SHARED_NOTEBOOK_MAX;
+ (int32_t) EDAM_NOTEBOOK_PERSONAL_SHARED_NOTEBOOK_MAX;
+ (int32_t) EDAM_NOTE_BUSINESS_SHARED_NOTE_MAX;
+ (int32_t) EDAM_NOTE_PERSONAL_SHARED_NOTE_MAX;
+ (int32_t) EDAM_NOTE_CONTENT_CLASS_LEN_MIN;
+ (int32_t) EDAM_NOTE_CONTENT_CLASS_LEN_MAX;
+ (NSString *) EDAM_NOTE_CONTENT_CLASS_REGEX;
+ (NSString *) EDAM_HELLO_APP_CONTENT_CLASS_PREFIX;
+ (NSString *) EDAM_FOOD_APP_CONTENT_CLASS_PREFIX;
+ (NSString *) EDAM_CONTENT_CLASS_HELLO_ENCOUNTER;
+ (NSString *) EDAM_CONTENT_CLASS_HELLO_PROFILE;
+ (NSString *) EDAM_CONTENT_CLASS_FOOD_MEAL;
+ (NSString *) EDAM_CONTENT_CLASS_SKITCH_PREFIX;
+ (NSString *) EDAM_CONTENT_CLASS_SKITCH;
+ (NSString *) EDAM_CONTENT_CLASS_SKITCH_PDF;
+ (NSString *) EDAM_CONTENT_CLASS_PENULTIMATE_PREFIX;
+ (NSString *) EDAM_CONTENT_CLASS_PENULTIMATE_NOTEBOOK;
+ (NSString *) EDAM_SOURCE_APPLICATION_POSTIT;
+ (NSString *) EDAM_SOURCE_APPLICATION_MOLESKINE;
+ (NSString *) EDAM_SOURCE_APPLICATION_EN_SCANSNAP;
+ (NSString *) EDAM_SOURCE_APPLICATION_EWC;
+ (NSString *) EDAM_SOURCE_OUTLOOK_CLIPPER;
+ (int32_t) EDAM_NOTE_TITLE_QUALITY_UNTITLED;
+ (int32_t) EDAM_NOTE_TITLE_QUALITY_LOW;
+ (int32_t) EDAM_NOTE_TITLE_QUALITY_MEDIUM;
+ (int32_t) EDAM_NOTE_TITLE_QUALITY_HIGH;
+ (int32_t) EDAM_RELATED_PLAINTEXT_LEN_MIN;
+ (int32_t) EDAM_RELATED_PLAINTEXT_LEN_MAX;
+ (int32_t) EDAM_RELATED_MAX_NOTES;
+ (int32_t) EDAM_RELATED_MAX_NOTEBOOKS;
+ (int32_t) EDAM_RELATED_MAX_TAGS;
+ (int32_t) EDAM_RELATED_MAX_EXPERTS;
+ (int32_t) EDAM_RELATED_MAX_RELATED_CONTENT;
+ (int32_t) EDAM_BUSINESS_NOTEBOOK_DESCRIPTION_LEN_MIN;
+ (int32_t) EDAM_BUSINESS_NOTEBOOK_DESCRIPTION_LEN_MAX;
+ (NSString *) EDAM_BUSINESS_NOTEBOOK_DESCRIPTION_REGEX;
+ (int32_t) EDAM_BUSINESS_PHONE_NUMBER_LEN_MAX;
+ (int32_t) EDAM_PREFERENCE_NAME_LEN_MIN;
+ (int32_t) EDAM_PREFERENCE_NAME_LEN_MAX;
+ (int32_t) EDAM_PREFERENCE_VALUE_LEN_MIN;
+ (int32_t) EDAM_PREFERENCE_VALUE_LEN_MAX;
+ (int32_t) EDAM_MAX_PREFERENCES;
+ (int32_t) EDAM_MAX_VALUES_PER_PREFERENCE;
+ (int32_t) EDAM_PREFERENCE_ONLY_ONE_VALUE_LEN_MAX;
+ (NSString *) EDAM_PREFERENCE_NAME_REGEX;
+ (NSString *) EDAM_PREFERENCE_VALUE_REGEX;
+ (NSString *) EDAM_PREFERENCE_ONLY_ONE_VALUE_REGEX;
+ (NSString *) EDAM_PREFERENCE_SHORTCUTS;
+ (NSString *) EDAM_PREFERENCE_BUSINESS_DEFAULT_NOTEBOOK;
+ (NSString *) EDAM_PREFERENCE_BUSINESS_QUICKNOTE;
+ (int32_t) EDAM_PREFERENCE_SHORTCUTS_MAX_VALUES;
+ (int32_t) EDAM_DEVICE_ID_LEN_MAX;
+ (NSString *) EDAM_DEVICE_ID_REGEX;
+ (int32_t) EDAM_DEVICE_DESCRIPTION_LEN_MAX;
+ (NSString *) EDAM_DEVICE_DESCRIPTION_REGEX;
+ (int32_t) EDAM_SEARCH_SUGGESTIONS_MAX;
+ (int32_t) EDAM_SEARCH_SUGGESTIONS_PREFIX_LEN_MAX;
+ (int32_t) EDAM_SEARCH_SUGGESTIONS_PREFIX_LEN_MIN;
+ (int32_t) EDAM_FIND_CONTACT_DEFAULT_MAX_RESULTS;
+ (int32_t) EDAM_FIND_CONTACT_MAX_RESULTS;
+ (int32_t) EDAM_NOTE_LOCK_VIEWERS_NOTES_MAX;
+ (int32_t) EDAM_GET_ORDERS_MAX_RESULTS;
+ (int32_t) EDAM_MESSAGE_BODY_LEN_MAX;
+ (NSString *) EDAM_MESSAGE_BODY_REGEX;
+ (int32_t) EDAM_MESSAGE_RECIPIENTS_MAX;
+ (int32_t) EDAM_MESSAGE_ATTACHMENTS_MAX;
+ (int32_t) EDAM_MESSAGE_ATTACHMENT_TITLE_LEN_MAX;
+ (NSString *) EDAM_MESSAGE_ATTACHMENT_TITLE_REGEX;
+ (int32_t) EDAM_MESSAGE_ATTACHMENT_SNIPPET_LEN_MAX;
+ (NSString *) EDAM_MESSAGE_ATTACHMENT_SNIPPET_REGEX;
+ (int32_t) EDAM_USER_PROFILE_PHOTO_MAX_BYTES;
+ (int32_t) EDAM_PROMOTION_ID_LEN_MAX;
+ (NSString *) EDAM_PROMOTION_ID_REGEX;
+ (int16_t) EDAM_APP_RATING_MIN;
+ (int16_t) EDAM_APP_RATING_MAX;
+ (int32_t) EDAM_SNIPPETS_NOTES_MAX;
+ (int32_t) EDAM_CONNECTED_IDENTITY_REQUEST_MAX;
+ (int32_t) EDAM_OPEN_ID_ACCESS_TOKEN_MAX;
@end
