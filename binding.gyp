{
  	"targets": [
    {
    	"include_dirs": [
	        "<!(nodejs -e \"require('nan')\")"
	      ],
      	"target_name": "addon",
      	"sources": [ "hello.cc" ]
    }
  ]
}