#include <com/sun/tools/javac/file/JRTIndex$CtSym.h>

#include <com/sun/tools/javac/file/JRTIndex.h>
#include <jcpp.h>

#undef EMPTY

using $JRTIndex = ::com::sun::tools::javac::file::JRTIndex;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

$FieldInfo _JRTIndex$CtSym_FieldInfo_[] = {
	{"hidden", "Z", nullptr, $PUBLIC | $FINAL, $field(JRTIndex$CtSym, hidden)},
	{"proprietary", "Z", nullptr, $PUBLIC | $FINAL, $field(JRTIndex$CtSym, proprietary)},
	{"minProfile", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(JRTIndex$CtSym, minProfile)},
	{"EMPTY", "Lcom/sun/tools/javac/file/JRTIndex$CtSym;", nullptr, $STATIC | $FINAL, $staticField(JRTIndex$CtSym, EMPTY)},
	{}
};

$MethodInfo _JRTIndex$CtSym_MethodInfo_[] = {
	{"<init>", "(ZZLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(JRTIndex$CtSym::*)(bool,bool,$String*)>(&JRTIndex$CtSym::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRTIndex$CtSym_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.JRTIndex$CtSym", "com.sun.tools.javac.file.JRTIndex", "CtSym", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRTIndex$CtSym_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.file.JRTIndex$CtSym",
	"java.lang.Object",
	nullptr,
	_JRTIndex$CtSym_FieldInfo_,
	_JRTIndex$CtSym_MethodInfo_,
	nullptr,
	nullptr,
	_JRTIndex$CtSym_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.JRTIndex"
};

$Object* allocate$JRTIndex$CtSym($Class* clazz) {
	return $of($alloc(JRTIndex$CtSym));
}

JRTIndex$CtSym* JRTIndex$CtSym::EMPTY = nullptr;

void JRTIndex$CtSym::init$(bool hidden, bool proprietary, $String* minProfile) {
	this->hidden = hidden;
	this->proprietary = proprietary;
	$set(this, minProfile, minProfile);
}

$String* JRTIndex$CtSym::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, "CtSym["_s));
	bool needSep = false;
	if (this->hidden) {
		sb->append("hidden"_s);
		needSep = true;
	}
	if (this->proprietary) {
		if (needSep) {
			sb->append(","_s);
		}
		sb->append("proprietary"_s);
		needSep = true;
	}
	if (this->minProfile != nullptr) {
		if (needSep) {
			sb->append(","_s);
		}
		sb->append(this->minProfile);
	}
	sb->append("]"_s);
	return sb->toString();
}

void clinit$JRTIndex$CtSym($Class* class$) {
	$assignStatic(JRTIndex$CtSym::EMPTY, $new(JRTIndex$CtSym, false, false, nullptr));
}

JRTIndex$CtSym::JRTIndex$CtSym() {
}

$Class* JRTIndex$CtSym::load$($String* name, bool initialize) {
	$loadClass(JRTIndex$CtSym, name, initialize, &_JRTIndex$CtSym_ClassInfo_, clinit$JRTIndex$CtSym, allocate$JRTIndex$CtSym);
	return class$;
}

$Class* JRTIndex$CtSym::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com