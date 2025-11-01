#ifndef _com_sun_tools_javac_util_Name_h_
#define _com_sun_tools_javac_util_Name_h_
//$ class com.sun.tools.javac.util.Name
//$ extends javax.lang.model.element.Name
//$ implements com.sun.tools.javac.jvm.PoolConstant

#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <java/lang/Array.h>
#include <javax/lang/model/element/Name.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Name$NameMapper;
					class Name$Table;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Name : public ::javax::lang::model::element::Name, public ::com::sun::tools::javac::jvm::PoolConstant {
	$class(Name, $NO_CLASS_INIT, ::javax::lang::model::element::Name, ::com::sun::tools::javac::jvm::PoolConstant)
public:
	Name();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Name$Table* table);
	virtual ::com::sun::tools::javac::util::Name* append(::com::sun::tools::javac::util::Name* n);
	virtual ::com::sun::tools::javac::util::Name* append(char16_t c, ::com::sun::tools::javac::util::Name* n);
	virtual char16_t charAt(int32_t index) override;
	virtual int32_t compareTo(::com::sun::tools::javac::util::Name* other);
	virtual bool contentEquals(::java::lang::CharSequence* cs) override;
	virtual $bytes* getByteArray() {return nullptr;}
	virtual int8_t getByteAt(int32_t i) {return 0;}
	virtual int32_t getByteLength() {return 0;}
	virtual int32_t getByteOffset() {return 0;}
	virtual void getBytes($bytes* cs, int32_t start);
	virtual int32_t getIndex() {return 0;}
	virtual bool isEmpty() override;
	virtual int32_t lastIndexOf(int8_t b);
	virtual int32_t length() override;
	virtual $Object* map(::com::sun::tools::javac::util::Name$NameMapper* mapper);
	virtual int32_t poolTag() override;
	virtual bool startsWith(::com::sun::tools::javac::util::Name* prefix);
	virtual ::com::sun::tools::javac::util::Name* subName(int32_t start, int32_t end);
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	virtual $String* toString() override;
	virtual $bytes* toUtf();
	::com::sun::tools::javac::util::Name$Table* table = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Name_h_