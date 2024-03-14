# wasm
just testing

# Requirements
npm install

# compile c++ cube.cpp to .wasm
emcc cube.cpp -s WASM=1 -o cube.wasm

# Run server
node index.js
visit localhost:3000
