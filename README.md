# wasm
just testing

# Requirements
npm 

# compile c++ cube.cpp to .wasm
emcc cube.cpp -s WASM=1 -o cube.wasm

# Run server
node index.js
visit localhost:3000
