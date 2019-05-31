set -e

FRAMEWORK_NAME="Salida"

if [ -d "${SRCROOT}/build" ]; then
rm -rf "${SRCROOT}/build"
fi

mkdir -p "${SRCROOT}/Output/Release"

xcodebuild -workspace "${FRAMEWORK_NAME}.xcworkspace" -scheme ${FRAMEWORK_NAME} -configuration release -arch arm64 -arch armv7 -arch armv7s only_active_arch=no defines_module=yes -sdk "iphoneos" SYMROOT=$(PWD)/build GCC_PRECOMPILE_PREFIX_HEADER=NO DEBUG_INFORMATION_FORMAT="DWARF with dSYM" OBJROOT="${OBJROOT}/DependentBuilds"
#xcodebuild -workspace "${FRAMEWORK_NAME}.xcworkspace" -scheme ${FRAMEWORK_NAME} -configuration release -arch x86_64 -arch i386 only_active_arch=no defines_module=yes -sdk "iphonesimulator" SYMROOT=$(PWD)/build GCC_PRECOMPILE_PREFIX_HEADER=NO DEBUG_INFORMATION_FORMAT="DWARF with dSYM"

if [ -d "${SRCROOT}/Output/Release/${FRAMEWORK_NAME}.framework" ]; then
rm -rf "${SRCROOT}/Output/Release/${FRAMEWORK_NAME}.framework"
fi

cp -r "${SRCROOT}/build/Release-iphoneos/${FRAMEWORK_NAME}.framework" "${SRCROOT}/Output/Release/${FRAMEWORK_NAME}.framework"

#lipo -create -output "${SRCROOT}/Output/Release/${FRAMEWORK_NAME}.framework/${FRAMEWORK_NAME}" "${SRCROOT}/build/Release-iphoneos/${FRAMEWORK_NAME}.framework/${FRAMEWORK_NAME}" "${SRCROOT}/build/Release-iphonesimulator/${FRAMEWORK_NAME}.framework/${FRAMEWORK_NAME}"

if [ -d "${SRCROOT}/build" ]; then
rm -rf "${SRCROOT}/build"
fi

