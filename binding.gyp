{
  "targets": [
    {
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ],
      "target_name": "Hello",
      "sources": [ "hello.cc" ]
    }
  ]
}