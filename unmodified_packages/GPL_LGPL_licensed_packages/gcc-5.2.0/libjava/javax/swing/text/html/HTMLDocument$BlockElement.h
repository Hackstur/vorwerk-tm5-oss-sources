
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_HTMLDocument$BlockElement__
#define __javax_swing_text_html_HTMLDocument$BlockElement__

#pragma interface

#include <javax/swing/text/AbstractDocument$BranchElement.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AttributeSet;
          class Element;
        namespace html
        {
            class HTMLDocument;
            class HTMLDocument$BlockElement;
        }
      }
    }
  }
}

class javax::swing::text::html::HTMLDocument$BlockElement : public ::javax::swing::text::AbstractDocument$BranchElement
{

public:
  HTMLDocument$BlockElement(::javax::swing::text::html::HTMLDocument *, ::javax::swing::text::Element *, ::javax::swing::text::AttributeSet *);
  virtual ::javax::swing::text::AttributeSet * getResolveParent();
  virtual ::java::lang::String * getName();
public: // actually package-private
  ::javax::swing::text::html::HTMLDocument * __attribute__((aligned(__alignof__( ::javax::swing::text::AbstractDocument$BranchElement)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_HTMLDocument$BlockElement__