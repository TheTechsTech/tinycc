/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#ifndef _STIERR_
#define _STIERR_

#define NT_SUCCESS(Status) ((NTSTATUS)(Status) >= 0)
#define NT_INFORMATION(Status) ((ULONG)(Status) >> 30==1)
#define NT_WARNING(Status) ((ULONG)(Status) >> 30==2)
#define NT_ERROR(Status) ((ULONG)(Status) >> 30==3)

#define STI_OK S_OK
#define STI_ERROR_NO_ERROR STI_OK
#define STI_NOTCONNECTED S_FALSE
#define STI_CHANGENOEFFECT S_FALSE
#define STIERR_OLD_VERSION MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_OLD_WIN_VERSION)
#define STIERR_BETA_VERSION MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_RMODE_APP)
#define STIERR_BADDRIVER MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_BAD_DRIVER_LEVEL)
#define STIERR_DEVICENOTREG REGDB_E_CLASSNOTREG
#define STIERR_OBJECTNOTFOUND MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_FILE_NOT_FOUND)
#define STIERR_INVALID_PARAM E_INVALIDARG
#define STIERR_NOINTERFACE E_NOINTERFACE
#define STIERR_GENERIC E_FAIL
#define STIERR_OUTOFMEMORY E_OUTOFMEMORY
#define STIERR_UNSUPPORTED E_NOTIMPL
#define STIERR_NOT_INITIALIZED MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_NOT_READY)
#define STIERR_ALREADY_INITIALIZED MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_ALREADY_INITIALIZED)
#define STIERR_DEVICE_LOCKED MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_LOCK_VIOLATION)
#define STIERR_READONLY E_ACCESSDENIED
#define STIERR_NOTINITIALIZED E_ACCESSDENIED
#define STIERR_NEEDS_LOCK MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_NOT_LOCKED)
#define STIERR_SHARING_VIOLATION MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_SHARING_VIOLATION)
#define STIERR_HANDLEEXISTS MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_ALREADY_EXISTS)
#define STIERR_INVALID_DEVICE_NAME MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_INVALID_NAME)
#define STIERR_INVALID_HW_TYPE MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_INVALID_DATA)
#define STIERR_INVALID_HW_TYPE MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_INVALID_DATA)
#define STIERR_NOEVENTS MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_NO_MORE_ITEMS)
#define STIERR_DEVICE_NOTREADY MAKE_HRESULT(SEVERITY_ERROR,FACILITY_WIN32,ERROR_NOT_READY)
#endif