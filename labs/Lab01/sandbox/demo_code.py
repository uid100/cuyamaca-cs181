#!/usr/bin/env python3

import os
from pathlib import Path
import html  # to escape HTML characters


output_file = "demo_code.html"

# Bootstrap 5 template start
html_start = \
"""<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>C++ Code Samples</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet">
    <style>
        body { padding: 20px; background-color: #f8f9fa; }
        pre { background-color: #f1f3f5; padding: 15px; border-radius: 5px; overflow-x: auto; max-height: 400px; }
        .card { margin-bottom: 20px; }
        h1.page-title { margin-bottom: 40px; }
    </style>
</head>
<body>
<div class="container">
<h1 class="page-title">C++ Code Samples</h1>
"""

html_end = \
"""
</div>
</body>
</html>
"""

# Find all .cpp files in current folder
cpp_files = sorted(Path('.').glob('*.cpp'))

sections = ""

for cpp_file in cpp_files:
    with open(cpp_file, 'r', encoding='utf-8') as f:
        code = f.read()
    escaped_code = html.escape(code)  # escape <, >, &
    sections += f"""
<div class="card">
  <div class="card-header bg-primary text-white">
    {cpp_file.name}
  </div>
  <div class="card-body">
    <pre>{escaped_code}</pre>
  </div>
</div>
"""

# Write the final HTML
with open(output_file, 'w', encoding='utf-8') as f:
    f.write(html_start + sections + html_end)

print(f"Bootstrap HTML file '{output_file}' created with {len(cpp_files)} C++ files.")
