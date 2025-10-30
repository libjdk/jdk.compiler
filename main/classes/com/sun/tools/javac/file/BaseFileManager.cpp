#include <com/sun/tools/javac/file/BaseFileManager.h>

#include <com/sun/tools/javac/file/BaseFileManager$1.h>
#include <com/sun/tools/javac/file/BaseFileManager$2.h>
#include <com/sun/tools/javac/file/BaseFileManager$3.h>
#include <com/sun/tools/javac/file/BaseFileManager$ByteBufferCache.h>
#include <com/sun/tools/javac/file/BaseFileManager$ContentCacheEntry.h>
#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <java/nio/charset/IllegalCharsetNameException.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <java/nio/file/Path.h>
#include <java/security/SecureClassLoader.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef HTML
#undef OTHER
#undef REPLACE
#undef REPORT
#undef SOURCE

using $URLArray = $Array<::java::net::URL>;
using $BaseFileManager$1 = ::com::sun::tools::javac::file::BaseFileManager$1;
using $BaseFileManager$2 = ::com::sun::tools::javac::file::BaseFileManager$2;
using $BaseFileManager$3 = ::com::sun::tools::javac::file::BaseFileManager$3;
using $BaseFileManager$ByteBufferCache = ::com::sun::tools::javac::file::BaseFileManager$ByteBufferCache;
using $BaseFileManager$ContentCacheEntry = ::com::sun::tools::javac::file::BaseFileManager$ContentCacheEntry;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $Locations = ::com::sun::tools::javac::file::Locations;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $OptionHelper$GrumpyHelper = ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $Options = ::com::sun::tools::javac::util::Options;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Constructor = ::java::lang::reflect::Constructor;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $IllegalCharsetNameException = ::java::nio::charset::IllegalCharsetNameException;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $Path = ::java::nio::file::Path;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class BaseFileManager$$Lambda$lambda$clear$0 : public $Consumer {
	$class(BaseFileManager$$Lambda$lambda$clear$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(BaseFileManager* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* k) override {
		$nc(inst$)->lambda$clear$0($cast($String, k));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BaseFileManager$$Lambda$lambda$clear$0>());
	}
	BaseFileManager* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BaseFileManager$$Lambda$lambda$clear$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BaseFileManager$$Lambda$lambda$clear$0, inst$)},
	{}
};
$MethodInfo BaseFileManager$$Lambda$lambda$clear$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/file/BaseFileManager;)V", nullptr, $PUBLIC, $method(static_cast<void(BaseFileManager$$Lambda$lambda$clear$0::*)(BaseFileManager*)>(&BaseFileManager$$Lambda$lambda$clear$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BaseFileManager$$Lambda$lambda$clear$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.file.BaseFileManager$$Lambda$lambda$clear$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* BaseFileManager$$Lambda$lambda$clear$0::load$($String* name, bool initialize) {
	$loadClass(BaseFileManager$$Lambda$lambda$clear$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BaseFileManager$$Lambda$lambda$clear$0::class$ = nullptr;

$FieldInfo _BaseFileManager_FieldInfo_[] = {
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC, $field(BaseFileManager, log)},
	{"charset", "Ljava/nio/charset/Charset;", nullptr, $PROTECTED, $field(BaseFileManager, charset)},
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $PROTECTED, $field(BaseFileManager, options)},
	{"classLoaderClass", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BaseFileManager, classLoaderClass)},
	{"locations", "Lcom/sun/tools/javac/file/Locations;", nullptr, $PROTECTED | $FINAL, $field(BaseFileManager, locations)},
	{"autoClose", "Z", nullptr, $PUBLIC, $field(BaseFileManager, autoClose)},
	{"lastUsedTime", "J", nullptr, $PRIVATE, $field(BaseFileManager, lastUsedTime)},
	{"deferredCloseTimeout", "J", nullptr, $PROTECTED, $field(BaseFileManager, deferredCloseTimeout)},
	{"javacFileManagerOptions", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/main/Option;>;", $PROTECTED | $STATIC | $FINAL, $staticField(BaseFileManager, javacFileManagerOptions)},
	{"multiReleaseValue", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BaseFileManager, multiReleaseValue)},
	{"encodingName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BaseFileManager, encodingName)},
	{"defaultEncodingName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BaseFileManager, defaultEncodingName)},
	{"byteBufferCache", "Lcom/sun/tools/javac/file/BaseFileManager$ByteBufferCache;", nullptr, $PRIVATE | $FINAL, $field(BaseFileManager, byteBufferCache)},
	{"contentCache", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/file/BaseFileManager$ContentCacheEntry;>;", $PROTECTED | $FINAL, $field(BaseFileManager, contentCache)},
	{}
};

$MethodInfo _BaseFileManager_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(BaseFileManager::*)($Charset*)>(&BaseFileManager::init$))},
	{"cache", "(Ljavax/tools/JavaFileObject;Ljava/nio/CharBuffer;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"createLocations", "()Lcom/sun/tools/javac/file/Locations;", nullptr, $PROTECTED},
	{"decode", "(Ljava/nio/ByteBuffer;Z)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"deferredClose", "()V", nullptr, $PROTECTED},
	{"flushCache", "(Ljavax/tools/JavaFileObject;)V", nullptr, $PUBLIC},
	{"getCachedContent", "(Ljavax/tools/JavaFileObject;)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"getClassLoader", "([Ljava/net/URL;)Ljava/lang/ClassLoader;", nullptr, $PROTECTED},
	{"getDecoder", "(Ljava/lang/String;Z)Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"getDefaultEncodingName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BaseFileManager::*)()>(&BaseFileManager::getDefaultEncodingName))},
	{"getEncodingName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getKind", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaFileObject$Kind*(*)($Path*)>(&BaseFileManager::getKind))},
	{"getKind", "(Ljava/lang/String;)Ljavax/tools/JavaFileObject$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaFileObject$Kind*(*)($String*)>(&BaseFileManager::getKind))},
	{"handleOption", "(Ljava/lang/String;Ljava/util/Iterator;)Z", "(Ljava/lang/String;Ljava/util/Iterator<Ljava/lang/String;>;)Z", $PUBLIC},
	{"handleOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"handleOptions", "(Ljava/util/Map;)Z", "(Ljava/util/Map<Lcom/sun/tools/javac/main/Option;Ljava/lang/String;>;)Z", $PUBLIC},
	{"isDefaultBootClassPath", "()Z", nullptr, $PUBLIC},
	{"isDefaultSystemModulesPath", "()Z", nullptr, $PUBLIC},
	{"isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"lambda$clear$0", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(BaseFileManager::*)($String*)>(&BaseFileManager::lambda$clear$0))},
	{"makeByteBuffer", "(Ljava/io/InputStream;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"nullCheck", "(Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(TT;)TT;", $PROTECTED | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&BaseFileManager::nullCheck))},
	{"nullCheck", "(Ljava/util/Collection;)Ljava/util/Collection;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<TT;>;)Ljava/util/Collection<TT;>;", $PROTECTED | $STATIC, $method(static_cast<$Collection*(*)($Collection*)>(&BaseFileManager::nullCheck))},
	{"recycleByteBuffer", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"setContext", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC},
	{"updateLastUsedTime", "()V", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _BaseFileManager_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.file.BaseFileManager$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.file.BaseFileManager$ContentCacheEntry", "com.sun.tools.javac.file.BaseFileManager", "ContentCacheEntry", $PROTECTED | $STATIC},
	{"com.sun.tools.javac.file.BaseFileManager$ByteBufferCache", "com.sun.tools.javac.file.BaseFileManager", "ByteBufferCache", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.file.BaseFileManager$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.file.BaseFileManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BaseFileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.file.BaseFileManager",
	"java.lang.Object",
	"javax.tools.JavaFileManager",
	_BaseFileManager_FieldInfo_,
	_BaseFileManager_MethodInfo_,
	nullptr,
	nullptr,
	_BaseFileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.file.BaseFileManager$3,com.sun.tools.javac.file.BaseFileManager$ContentCacheEntry,com.sun.tools.javac.file.BaseFileManager$ByteBufferCache,com.sun.tools.javac.file.BaseFileManager$2,com.sun.tools.javac.file.BaseFileManager$1"
};

$Object* allocate$BaseFileManager($Class* clazz) {
	return $of($alloc(BaseFileManager));
}

$Set* BaseFileManager::javacFileManagerOptions = nullptr;

void BaseFileManager::init$($Charset* charset) {
	this->lastUsedTime = $System::currentTimeMillis();
	this->deferredCloseTimeout = 0;
	$set(this, contentCache, $new($HashMap));
	$set(this, charset, charset);
	$set(this, byteBufferCache, $new($BaseFileManager$ByteBufferCache));
	$set(this, locations, createLocations());
}

void BaseFileManager::setContext($Context* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, log, $Log::instance(context));
	$set(this, options, $Options::instance(context));
	$set(this, classLoaderClass, $nc(this->options)->get("procloader"_s));
	bool warn = $nc(this->options)->isLintSet("path"_s);
	$nc(this->locations)->update(this->log, warn, $($FSInfo::instance(context)));
	$var($String, s, $nc(this->options)->get("fileManager.deferClose"_s));
	if (s != nullptr) {
		try {
			this->deferredCloseTimeout = $cast(int32_t, ($Float::parseFloat(s) * 1000));
		} catch ($NumberFormatException& e) {
			this->deferredCloseTimeout = 60 * 1000;
		}
	}
}

$Locations* BaseFileManager::createLocations() {
	return $new($Locations);
}

void BaseFileManager::deferredClose() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, $new($BaseFileManager$1, this, $$str({$($of(this)->getClass()->getName()), " DeferredClose"_s})));
	t->setDaemon(true);
	t->start();
}

void BaseFileManager::updateLastUsedTime() {
	$synchronized(this) {
		if (this->deferredCloseTimeout > 0) {
			this->lastUsedTime = $System::currentTimeMillis();
		}
	}
}

void BaseFileManager::clear() {
	$useLocalCurrentObjectStackCache();
	$$new($HashSet, $(static_cast<$Collection*>($nc(this->options)->keySet())))->forEach(static_cast<$Consumer*>($$new(BaseFileManager$$Lambda$lambda$clear$0, this)));
}

$ClassLoader* BaseFileManager::getClassLoader($URLArray* urls) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, thisClassLoader, $of(this)->getClass()->getClassLoader());
	if (this->classLoaderClass != nullptr) {
		try {
			$load($ClassLoader);
			$Class* loader = $Class::forName(this->classLoaderClass)->asSubclass($ClassLoader::class$);
			$load($URLArray);
			$var($ClassArray, constrArgTypes, $new($ClassArray, {
				$getClass($URLArray),
				$ClassLoader::class$
			}));
			$var($Constructor, constr, $nc(loader)->getConstructor(constrArgTypes));
			return $cast($ClassLoader, $nc(constr)->newInstance($$new($ObjectArray, {
				$of(urls),
				$of(thisClassLoader)
			})));
		} catch ($ReflectiveOperationException& t) {
		}
	}
	return $new($URLClassLoader, urls, thisClassLoader);
}

bool BaseFileManager::isDefaultBootClassPath() {
	return $nc(this->locations)->isDefaultBootClassPath();
}

bool BaseFileManager::isDefaultSystemModulesPath() {
	return $nc(this->locations)->isDefaultSystemModulesPath();
}

bool BaseFileManager::handleOption($String* current, $Iterator* remaining) {
	$useLocalCurrentObjectStackCache();
	$var($OptionHelper, helper, $new($BaseFileManager$2, this, this->log));
	$Option* o = $Option::lookup(current, BaseFileManager::javacFileManagerOptions);
	if (o == nullptr) {
		return false;
	}
	try {
		$nc(o)->handleOption(helper, current, remaining);
	} catch ($Option$InvalidValueException& e) {
		$throwNew($IllegalArgumentException, $(e->getMessage()), e);
	}
	return true;
}

int32_t BaseFileManager::isSupportedOption($String* option) {
	$Option* o = $Option::lookup(option, BaseFileManager::javacFileManagerOptions);
	return (o == nullptr) ? -1 : $nc(o)->hasArg() ? 1 : 0;
}

bool BaseFileManager::handleOption($Option* option, $String* value) {
	$init($BaseFileManager$3);
	switch ($nc($BaseFileManager$3::$SwitchMap$com$sun$tools$javac$main$Option)->get($nc((option))->ordinal())) {
	case 1:
		{
			$set(this, encodingName, value);
			return true;
		}
	case 2:
		{
			$set(this, multiReleaseValue, value);
			$nc(this->locations)->setMultiReleaseValue(value);
			return true;
		}
	default:
		{
			return $nc(this->locations)->handleOption(option, value);
		}
	}
}

bool BaseFileManager::handleOptions($Map* map) {
	$useLocalCurrentObjectStackCache();
	bool ok = true;
	{
		$var($Iterator, i$, $nc($($nc(map)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				try {
					bool var$0 = ok;
					$var($Option, var$2, $cast($Option, $nc(e)->getKey()));
					bool var$1 = handleOption(var$2, $cast($String, $(e->getValue())));
					ok = var$0 & var$1;
				} catch ($IllegalArgumentException& ex) {
					$var($String, var$3, $nc(($cast($Option, $($nc(e)->getKey()))))->getPrimaryName());
					$nc(this->log)->error($($CompilerProperties$Errors::IllegalArgumentForOption(var$3, $(ex->getMessage()))));
					ok = false;
				}
			}
		}
	}
	return ok;
}

$String* BaseFileManager::getDefaultEncodingName() {
	if (this->defaultEncodingName == nullptr) {
		$set(this, defaultEncodingName, $nc($($Charset::defaultCharset()))->name());
	}
	return this->defaultEncodingName;
}

$String* BaseFileManager::getEncodingName() {
	return (this->encodingName != nullptr) ? this->encodingName : getDefaultEncodingName();
}

$CharBuffer* BaseFileManager::decode($ByteBuffer* inbuf, bool ignoreEncodingErrors) {
	$useLocalCurrentObjectStackCache();
	$var($String, encName, getEncodingName());
	$var($CharsetDecoder, decoder, nullptr);
	try {
		$assign(decoder, getDecoder(encName, ignoreEncodingErrors));
	} catch ($IllegalCharsetNameException& e) {
		$nc(this->log)->error($($CompilerProperties$Errors::UnsupportedEncoding(encName)));
		return $nc($($CharBuffer::allocate(1)))->flip();
	} catch ($UnsupportedCharsetException& e) {
		$nc(this->log)->error($($CompilerProperties$Errors::UnsupportedEncoding(encName)));
		return $nc($($CharBuffer::allocate(1)))->flip();
	}
	float var$0 = $nc(decoder)->averageCharsPerByte() * 0.8f;
	float factor = var$0 + decoder->maxCharsPerByte() * 0.2f;
	$var($CharBuffer, dest, $CharBuffer::allocate(10 + $cast(int32_t, ($nc(inbuf)->remaining() * factor))));
	while (true) {
		$var($CoderResult, result, decoder->decode(inbuf, dest, true));
		$nc(dest)->flip();
		if ($nc(result)->isUnderflow()) {
			int32_t var$1 = dest->limit();
			if (var$1 == dest->capacity()) {
				$assign(dest, $nc($($CharBuffer::allocate(dest->capacity() + 1)))->put(dest));
				$nc(dest)->flip();
			}
			return dest;
		} else if (result->isOverflow()) {
			int32_t var$2 = 10 + dest->capacity();
			int32_t var$4 = $nc(inbuf)->remaining();
			int32_t var$3 = $cast(int32_t, (var$4 * decoder->maxCharsPerByte()));
			int32_t newCapacity = var$2 + var$3;
			$assign(dest, $nc($($CharBuffer::allocate(newCapacity)))->put(dest));
		} else {
			bool var$6 = result->isMalformed();
			if (var$6 || result->isUnmappable()) {
				$var($StringBuilder, unmappable, $new($StringBuilder));
				int32_t len = result->length();
				for (int32_t i = 0; i < len; ++i) {
					unmappable->append($($String::format("%02X"_s, $$new($ObjectArray, {$($of($Byte::valueOf($nc(inbuf)->get())))}))));
				}
				$var($String, charsetName, this->charset == nullptr ? encName : $nc(this->charset)->name());
				int32_t var$7 = dest->limit();
				$nc(this->log)->error(var$7, $($CompilerProperties$Errors::IllegalCharForEncoding($(unmappable->toString()), charsetName)));
				dest->position(dest->limit());
				dest->limit(dest->capacity());
				dest->put((char16_t)0x0000FFFD);
			} else {
				$throwNew($AssertionError, $of(result));
			}
		}
	}
}

$CharsetDecoder* BaseFileManager::getDecoder($String* encodingName, bool ignoreEncodingErrors) {
	$useLocalCurrentObjectStackCache();
	$var($Charset, cs, (this->charset == nullptr) ? $Charset::forName(encodingName) : this->charset);
	$var($CharsetDecoder, decoder, $nc(cs)->newDecoder());
	$var($CodingErrorAction, action, nullptr);
	if (ignoreEncodingErrors) {
		$init($CodingErrorAction);
		$assign(action, $CodingErrorAction::REPLACE);
	} else {
		$init($CodingErrorAction);
		$assign(action, $CodingErrorAction::REPORT);
	}
	return $nc($($nc(decoder)->onMalformedInput(action)))->onUnmappableCharacter(action);
}

$ByteBuffer* BaseFileManager::makeByteBuffer($InputStream* in) {
	$useLocalCurrentObjectStackCache();
	int32_t limit = $nc(in)->available();
	if (limit < 1024) {
		limit = 1024;
	}
	$var($ByteBuffer, result, $nc(this->byteBufferCache)->get(limit));
	int32_t position = 0;
	while (in->available() != 0) {
		if (position >= limit) {
			$assign(result, $nc($($ByteBuffer::allocate(limit <<= 1)))->put($($nc(result)->flip())));
		}
		int32_t count = in->read($($cast($bytes, $nc(result)->array())), position, limit - position);
		if (count < 0) {
			break;
		}
		$nc(result)->position(position += count);
	}
	return $nc(result)->flip();
}

void BaseFileManager::recycleByteBuffer($ByteBuffer* bb) {
	$nc(this->byteBufferCache)->put(bb);
}

$CharBuffer* BaseFileManager::getCachedContent($JavaFileObject* file) {
	$var($BaseFileManager$ContentCacheEntry, e, $cast($BaseFileManager$ContentCacheEntry, $nc(this->contentCache)->get(file)));
	if (e == nullptr) {
		return nullptr;
	}
	if (!$nc(e)->isValid(file)) {
		$nc(this->contentCache)->remove(file);
		return nullptr;
	}
	return $nc(e)->getValue();
}

void BaseFileManager::cache($JavaFileObject* file, $CharBuffer* cb) {
	$nc(this->contentCache)->put(file, $$new($BaseFileManager$ContentCacheEntry, file, cb));
}

void BaseFileManager::flushCache($JavaFileObject* file) {
	$nc(this->contentCache)->remove(file);
}

$JavaFileObject$Kind* BaseFileManager::getKind($Path* path) {
	$init(BaseFileManager);
	$useLocalCurrentObjectStackCache();
	return getKind($($nc($($nc(path)->getFileName()))->toString()));
}

$JavaFileObject$Kind* BaseFileManager::getKind($String* name) {
	$init(BaseFileManager);
	$init($JavaFileObject$Kind);
	if ($nc(name)->endsWith($JavaFileObject$Kind::CLASS->extension)) {
		return $JavaFileObject$Kind::CLASS;
	} else {
		if (name->endsWith($JavaFileObject$Kind::SOURCE->extension)) {
			return $JavaFileObject$Kind::SOURCE;
		} else {
			if (name->endsWith($JavaFileObject$Kind::HTML->extension)) {
				return $JavaFileObject$Kind::HTML;
			} else {
				return $JavaFileObject$Kind::OTHER;
			}
		}
	}
}

$Object* BaseFileManager::nullCheck(Object$* o) {
	$init(BaseFileManager);
	return $of($Objects::requireNonNull(o));
}

$Collection* BaseFileManager::nullCheck($Collection* it) {
	$init(BaseFileManager);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(it)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, t, i$->next());
			$Objects::requireNonNull(t);
		}
	}
	return it;
}

void BaseFileManager::lambda$clear$0($String* k) {
	$nc(this->options)->remove(k);
}

void clinit$BaseFileManager($Class* class$) {
	$assignStatic(BaseFileManager::javacFileManagerOptions, $Option::getJavacFileManagerOptions());
}

BaseFileManager::BaseFileManager() {
}

$Class* BaseFileManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BaseFileManager$$Lambda$lambda$clear$0::classInfo$.name)) {
			return BaseFileManager$$Lambda$lambda$clear$0::load$(name, initialize);
		}
	}
	$loadClass(BaseFileManager, name, initialize, &_BaseFileManager_ClassInfo_, clinit$BaseFileManager, allocate$BaseFileManager);
	return class$;
}

$Class* BaseFileManager::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com