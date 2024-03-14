const express = require('express');
const app = express();
const port = 3000; // Choose any available port

// Serve static files (e.g., your index.html and wasm file)
app.use(express.static(__dirname));

// Start the server
app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
