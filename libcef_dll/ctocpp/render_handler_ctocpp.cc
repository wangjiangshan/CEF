// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/ctocpp/render_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefRenderHandlerCToCpp::GetViewRect(CefRefPtr<CefBrowser> browser,
    CefRect& rect)
{
  if (CEF_MEMBER_MISSING(struct_, get_view_rect))
    return false;

  return struct_->get_view_rect(struct_, CefBrowserCppToC::Wrap(browser),
      &rect) ? true : false;
}

bool CefRenderHandlerCToCpp::GetScreenRect(CefRefPtr<CefBrowser> browser,
    CefRect& rect)
{
  if (CEF_MEMBER_MISSING(struct_, get_screen_rect))
    return false;

  return struct_->get_screen_rect(struct_, CefBrowserCppToC::Wrap(browser),
      &rect) ? true : false;
}

bool CefRenderHandlerCToCpp::GetScreenPoint(CefRefPtr<CefBrowser> browser,
    int viewX, int viewY, int& screenX, int& screenY)
{
  if (CEF_MEMBER_MISSING(struct_, get_screen_point))
    return false;

  return struct_->get_screen_point(struct_, CefBrowserCppToC::Wrap(browser),
      viewX, viewY, &screenX, &screenY) ? true : false;
}

void CefRenderHandlerCToCpp::OnPopupShow(CefRefPtr<CefBrowser> browser,
    bool show)
{
  if (CEF_MEMBER_MISSING(struct_, on_popup_show))
    return;

  struct_->on_popup_show(struct_, CefBrowserCppToC::Wrap(browser), show);
}

void CefRenderHandlerCToCpp::OnPopupSize(CefRefPtr<CefBrowser> browser,
    const CefRect& rect)
{
  // BEGIN DELETE BEFORE MODIFYING
  if (CEF_MEMBER_MISSING(struct_, on_popup_size))
    return;

  struct_->on_popup_size(struct_, CefBrowserCppToC::Wrap(browser), &rect);
}

void CefRenderHandlerCToCpp::OnPaint(CefRefPtr<CefBrowser> browser,
    PaintElementType type, const CefRect& dirtyRect, const void* buffer)
{
  if (CEF_MEMBER_MISSING(struct_, on_paint))
    return;

  return struct_->on_paint(struct_, CefBrowserCppToC::Wrap(browser), type,
      &dirtyRect, buffer);
}

void CefRenderHandlerCToCpp::OnCursorChange(CefRefPtr<CefBrowser> browser,
    CefCursorHandle cursor)
{
  if (CEF_MEMBER_MISSING(struct_, on_cursor_change))
    return;

  return struct_->on_cursor_change(struct_, CefBrowserCppToC::Wrap(browser),
      cursor);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefRenderHandlerCToCpp, CefRenderHandler,
    cef_render_handler_t>::DebugObjCt = 0;
#endif

