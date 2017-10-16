/*
 * Reference:
 * https://medium.com/@marcinbaraniecki/extending-node-js-with-native-c-modules-63294a91ce4
 * https://github.com/nodejs/node-addon-examples/tree/master/1_hello_world#step-4
 */
#include <node.h>
#include <v8.h>

using namespace v8;

Handle<Value> Method(const Arguments& args) {
  HandleScope scope;
  return scope.Close(String::New("world"));
}

void Init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("hello"),
      FunctionTemplate::New(Method)->GetFunction());
}

NODE_MODULE(hello, Init)