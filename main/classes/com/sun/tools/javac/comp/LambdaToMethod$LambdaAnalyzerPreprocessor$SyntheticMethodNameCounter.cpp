#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter.h>

#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, this$1)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, map)},
	{}
};

$MethodInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::*)($LambdaToMethod$LambdaAnalyzerPreprocessor*)>(&LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::init$))},
	{"getIndex", "(Ljava/lang/StringBuilder;)I", nullptr, 0},
	{}
};

$InnerClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
	{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "SyntheticMethodNameCounter", $PRIVATE},
	{}
};

$ClassInfo _LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter",
	"java.lang.Object",
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_FieldInfo_,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter($Class* clazz) {
	return $of($alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter));
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::init$($LambdaToMethod$LambdaAnalyzerPreprocessor* this$1) {
	$set(this, this$1, this$1);
	$set(this, map, $new($HashMap));
}

int32_t LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::getIndex($StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$var($String, temp, $nc(buf)->toString());
	$var($Integer, count, $cast($Integer, $nc(this->map)->get(temp)));
	if (count == nullptr) {
		$assign(count, $Integer::valueOf(0));
	}
	$assign(count, $Integer::valueOf(($nc(count)->intValue() + 1)));
	$nc(this->map)->put(temp, count);
	return $nc(count)->intValue();
}

LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter, name, initialize, &_LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter_ClassInfo_, allocate$LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter);
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com