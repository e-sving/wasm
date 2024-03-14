# wasm
just testing

# Requirements
npm install

# compile c++ cube.cpp to .wasm
emcc pie_chart.cpp -o index.html -s WASM=1

# Run server
node server.js
visit localhost:3000
