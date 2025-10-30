#include <com/sun/tools/sjavac/server/RequestHandler$1.h>

#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/server/RequestHandler.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $Util = ::com::sun::tools::sjavac::Util;
using $RequestHandler = ::com::sun::tools::sjavac::server::RequestHandler;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class RequestHandler$1$$Lambda$lambda$printLogMsg$0 : public $Function {
	$class(RequestHandler$1$$Lambda$lambda$printLogMsg$0, $NO_CLASS_INIT, $Function)
public:
	void init$($Log$Level* msgLevel) {
		$set(this, msgLevel, msgLevel);
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(RequestHandler$1::lambda$printLogMsg$0(msgLevel, $cast($String, line)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RequestHandler$1$$Lambda$lambda$printLogMsg$0>());
	}
	$Log$Level* msgLevel = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RequestHandler$1$$Lambda$lambda$printLogMsg$0::fieldInfos[2] = {
	{"msgLevel", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC, $field(RequestHandler$1$$Lambda$lambda$printLogMsg$0, msgLevel)},
	{}
};
$MethodInfo RequestHandler$1$$Lambda$lambda$printLogMsg$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/sjavac/Log$Level;)V", nullptr, $PUBLIC, $method(static_cast<void(RequestHandler$1$$Lambda$lambda$printLogMsg$0::*)($Log$Level*)>(&RequestHandler$1$$Lambda$lambda$printLogMsg$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RequestHandler$1$$Lambda$lambda$printLogMsg$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.server.RequestHandler$1$$Lambda$lambda$printLogMsg$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* RequestHandler$1$$Lambda$lambda$printLogMsg$0::load$($String* name, bool initialize) {
	$loadClass(RequestHandler$1$$Lambda$lambda$printLogMsg$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RequestHandler$1$$Lambda$lambda$printLogMsg$0::class$ = nullptr;

class RequestHandler$1$$Lambda$lambda$printLogMsg$1$1 : public $Consumer {
	$class(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(RequestHandler$1* inst, $Log$Level* msgLevel) {
		$set(this, inst$, inst);
		$set(this, msgLevel, msgLevel);
	}
	virtual void accept(Object$* line) override {
		$nc(inst$)->lambda$printLogMsg$1(msgLevel, $cast($String, line));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RequestHandler$1$$Lambda$lambda$printLogMsg$1$1>());
	}
	RequestHandler$1* inst$ = nullptr;
	$Log$Level* msgLevel = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, inst$)},
	{"msgLevel", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC, $field(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, msgLevel)},
	{}
};
$MethodInfo RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/sjavac/server/RequestHandler$1;Lcom/sun/tools/sjavac/Log$Level;)V", nullptr, $PUBLIC, $method(static_cast<void(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::*)(RequestHandler$1*,$Log$Level*)>(&RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.server.RequestHandler$1$$Lambda$lambda$printLogMsg$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::load$($String* name, bool initialize) {
	$loadClass(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::class$ = nullptr;

$FieldInfo _RequestHandler$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/sjavac/server/RequestHandler;", nullptr, $FINAL | $SYNTHETIC, $field(RequestHandler$1, this$0)},
	{}
};

$MethodInfo _RequestHandler$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/server/RequestHandler;Ljava/io/Writer;Ljava/io/Writer;)V", nullptr, 0, $method(static_cast<void(RequestHandler$1::*)($RequestHandler*,$Writer*,$Writer*)>(&RequestHandler$1::init$))},
	{"isLevelLogged", "(Lcom/sun/tools/sjavac/Log$Level;)Z", nullptr, $PROTECTED},
	{"lambda$printLogMsg$0", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Log$Level*,$String*)>(&RequestHandler$1::lambda$printLogMsg$0))},
	{"lambda$printLogMsg$1", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(RequestHandler$1::*)($Log$Level*,$String*)>(&RequestHandler$1::lambda$printLogMsg$1))},
	{"printLogMsg", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _RequestHandler$1_EnclosingMethodInfo_ = {
	"com.sun.tools.sjavac.server.RequestHandler",
	"run",
	"()V"
};

$InnerClassInfo _RequestHandler$1_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.server.RequestHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RequestHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.sjavac.server.RequestHandler$1",
	"com.sun.tools.sjavac.Log",
	nullptr,
	_RequestHandler$1_FieldInfo_,
	_RequestHandler$1_MethodInfo_,
	nullptr,
	&_RequestHandler$1_EnclosingMethodInfo_,
	_RequestHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.server.RequestHandler"
};

$Object* allocate$RequestHandler$1($Class* clazz) {
	return $of($alloc(RequestHandler$1));
}

void RequestHandler$1::init$($RequestHandler* this$0, $Writer* out, $Writer* err) {
	$set(this, this$0, this$0);
	$Log::init$(out, err);
}

bool RequestHandler$1::isLevelLogged($Log$Level* l) {
	return true;
}

void RequestHandler$1::printLogMsg($Log$Level* msgLevel, $String* msg) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($Util::getLines(msg)))->map(static_cast<$Function*>($$new(RequestHandler$1$$Lambda$lambda$printLogMsg$0, msgLevel)))))->forEach(static_cast<$Consumer*>($$new(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, this, msgLevel)));
}

void RequestHandler$1::lambda$printLogMsg$1($Log$Level* msgLevel, $String* line) {
	$Log::printLogMsg(msgLevel, line);
}

$String* RequestHandler$1::lambda$printLogMsg$0($Log$Level* msgLevel, $String* line) {
	$init(RequestHandler$1);
	return $str({msgLevel, ":"_s, line});
}

RequestHandler$1::RequestHandler$1() {
}

$Class* RequestHandler$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RequestHandler$1$$Lambda$lambda$printLogMsg$0::classInfo$.name)) {
			return RequestHandler$1$$Lambda$lambda$printLogMsg$0::load$(name, initialize);
		}
		if (name->equals(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::classInfo$.name)) {
			return RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::load$(name, initialize);
		}
	}
	$loadClass(RequestHandler$1, name, initialize, &_RequestHandler$1_ClassInfo_, allocate$RequestHandler$1);
	return class$;
}

$Class* RequestHandler$1::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com