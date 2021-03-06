#ifndef tp_pipeline_AbstractComplexObject_h
#define tp_pipeline_AbstractComplexObject_h

#include "tp_pipeline/Globals.h"

#include "json.hpp"

namespace tp_pipeline
{

//##################################################################################################
class AbstractComplexObject
{
  TP_NONCOPYABLE(AbstractComplexObject);
  tp_utils::StringID m_type;
public:

  //################################################################################################
  AbstractComplexObject(tp_utils::StringID type);

  //################################################################################################
  virtual ~AbstractComplexObject();

  //################################################################################################
  tp_utils::StringID type()const;

  //################################################################################################
  virtual nlohmann::json saveBinary(const std::function<uint64_t(const std::string&)>& addBlob) const=0;

  //################################################################################################
  virtual AbstractComplexObject* clone()const=0;
};

}

#endif
