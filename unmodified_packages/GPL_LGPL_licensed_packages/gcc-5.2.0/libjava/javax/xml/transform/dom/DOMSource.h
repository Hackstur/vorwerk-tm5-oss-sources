
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_transform_dom_DOMSource__
#define __javax_xml_transform_dom_DOMSource__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace transform
      {
        namespace dom
        {
            class DOMSource;
        }
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class javax::xml::transform::dom::DOMSource : public ::java::lang::Object
{

public:
  DOMSource();
  DOMSource(::org::w3c::dom::Node *);
  DOMSource(::org::w3c::dom::Node *, ::java::lang::String *);
  virtual void setNode(::org::w3c::dom::Node *);
  virtual ::org::w3c::dom::Node * getNode();
  virtual void setSystemId(::java::lang::String *);
  virtual ::java::lang::String * getSystemId();
  static ::java::lang::String * FEATURE;
private:
  ::org::w3c::dom::Node * __attribute__((aligned(__alignof__( ::java::lang::Object)))) node;
  ::java::lang::String * systemId;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_xml_transform_dom_DOMSource__
