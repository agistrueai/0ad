#ifndef __API_H__
#define __API_H__

// Function specs
extern JSFunctionSpec globalFunctions[];

// JS API implementation

JSBool init(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

JSBool error(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
JSBool print(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

JSBool getTerrain(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
JSBool setTerrain(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

JSBool getHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
JSBool setHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

JSBool randInt(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
JSBool randFloat(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

#endif