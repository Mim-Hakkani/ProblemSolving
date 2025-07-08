✅ Day 75: Django Introduction & Setup
Django কি? Django এর বৈশিষ্ট্য

Python Virtual Environment তৈরি

Django ইন্সটল ও নতুন প্রজেক্ট তৈরি

প্র্যাকটিস:

Virtualenv setup করো

django-admin দিয়ে নতুন প্রজেক্ট তৈরি করো

Development server রান করো

✅ Day 76: Django Project Structure
Django project ও app এর পার্থক্য

settings.py, urls.py, wsgi.py পরিচিতি

প্রথম app তৈরি ও app কে project এ যুক্ত করা

প্র্যাকটিস:

নতুন app তৈরি করো

project settings.py তে app যুক্ত করো

project urls.py তে app url include করো

✅ Day 77: URL Routing
URL Dispatcher (urls.py) কীভাবে কাজ করে

path vs re_path

URL pattern লিখা

প্র্যাকটিস:

বিভিন্ন url pattern লিখে views কল করো

URL parameter পাস করো (e.g. /blog/3/)

✅ Day 78: Views (Function Based Views)
FBV কী এবং কিভাবে কাজ করে

HttpResponse ব্যবহার

Template থেকে data পাঠানো

প্র্যাকটিস:

basic FBV লিখো যা “Hello, World!” দেখায়

context দিয়ে template render করো

✅ Day 79: Templates
Template language basics

Template inheritance

Variables, tags, filters

প্র্যাকটিস:

base.html তৈরি করো

template extend করে নতুন পেজ তৈরি করো

template tags (for loop, if condition) ব্যবহার করো

✅ Day 80: Models Introduction
Django ORM কি?

Model class তৈরি

Migration তৈরি ও চালানো

প্র্যাকটিস:

সিম্পল model তৈরি করো (যেমন BlogPost)

migrate চালাও

Django admin এ মডেল register করো

✅ Day 81: Django Admin
Admin panel কি?

মডেল admin এ register ও customize করা

Superuser তৈরি করা

প্র্যাকটিস:

superuser তৈরি করো

মডেল admin এ add/edit/delete করো

admin customization try করো

✅ Day 82: CRUD Operation – Create & Read
Create ও Read view তৈরি

Form ব্যবহার করে ডাটা ইনপুট নেয়া

Queryset basics

প্র্যাকটিস:

নতুন blog post create করার view বানাও

blog post list দেখানোর view বানাও

✅ Day 83: CRUD Operation – Update & Delete
Update view ও form

Delete view ও confirmation

URL এ pk ব্যবহার

প্র্যাকটিস:

blog post update করার ফর্ম বানাও

delete confirmation page বানাও

✅ Day 84: Django Forms
Forms.py তৈরি

ModelForm এর ব্যবহার

Validation basics

প্র্যাকটিস:

ModelForm তৈরি করো

Form validation করো (required field, max length)

✅ Day 85: Static Files & Media Files
Static files (CSS, JS) যোগ করা

Media files (image upload) হ্যান্ডেল করা

settings.py এ configuration

প্র্যাকটিস:

CSS ফাইল যুক্ত করো

ইমেজ upload করার ফিচার বানাও

✅ Day 86: Django Templates Advanced
Custom template filters & tags

Include tag

Using static files in templates

প্র্যাকটিস:

custom filter বানাও

template এ static file include করো

✅ Day 87: Django Messages Framework
Message framework পরিচিতি

Success, error message দেখানো

Template এ message display করা

প্র্যাকটিস:

form submit এর পর message দেখাও

success ও error message আলাদা করো

✅ Day 88: User Authentication – Signup
User model ও authentication system

Signup view ও form তৈরি

Password hashing

প্র্যাকটিস:

ইউজার রেজিস্ট্রেশন ফর্ম বানাও

রেজিস্ট্রেশন ডাটা ডাটাবেজে সেভ করো

✅ Day 89: User Authentication – Login & Logout
Login view ও form

Logout functionality

Login required decorator

প্র্যাকটিস:

ইউজার login page বানাও

logout ফাংশনালিটি যোগ করো

login_required decorator ব্যবহার করো

✅ Day 90: User Profile & Permissions
User profile page তৈরি

Permissions ও Groups basics

Restrict view access based on login

প্র্যাকটিস:

প্রোফাইল page বানাও

login না করা ইউজার redirect করো

✅ Day 91: Django Sessions & Cookies
Sessions কীভাবে কাজ করে

Cookie handling basics

প্র্যাকটিস:

session এ ডাটা রাখো ও পড়ো

cookie সেট ও পড়ার কোড লিখো

✅ Day 92: Class Based Views (CBV) Introduction
FBV vs CBV

Generic views overview

Simple CBV তৈরি

প্র্যাকটিস:

simple CBV লিখে route করো

TemplateView ব্যবহার করো

✅ Day 93: CBV – DetailView & ListView
ListView ব্যবহার

DetailView ব্যবহার

Queryset customization

প্র্যাকটিস:

blog post list দেখানোর জন্য ListView

single post দেখানোর জন্য DetailView

✅ Day 94: CBV – CreateView, UpdateView, DeleteView
CreateView, UpdateView, DeleteView কাজ

Form validation in CBV

প্র্যাকটিস:

blog post create করার জন্য CreateView

update ও delete করার জন্য UpdateView, DeleteView

✅ Day 95: Django REST Framework (DRF) Introduction
REST API কি?

DRF installation ও setup

Simple APIView তৈরি

প্র্যাকটিস:

basic APIView লিখো যা JSON রেসপন্স দেয়

✅ Day 96: DRF Serializers & ViewSets
Serializer কি?

ModelSerializer তৈরি

ViewSet ও Router ব্যবহার

প্র্যাকটিস:

blog post এর Serializer তৈরি করো

ViewSet এর মাধ্যমে CRUD API তৈরি করো

✅ Day 97: DRF Authentication & Permissions
DRF authentication classes

Permission classes

Token authentication basics

প্র্যাকটিস:

API এ authentication যোগ করো

user permission set করো

✅ Day 98: Pagination & Filtering in DRF
Pagination types

Filtering queryset

Search functionality

প্র্যাকটিস:

API তে pagination enable করো

filter ও search API বানাও

✅ Day 99: Advanced DRF Features
Throttling

Versioning

Nested serializers

প্র্যাকটিস:

throttle ব্যবহার করো

nested serializer তৈরি করো

✅ Day 100: Deployment Preparation
Django settings for production

Static files handling in production

Security settings basics

প্র্যাকটিস:

production settings তৈরির চেষ্টা করো

✅ Day 101: Deployment with Gunicorn & Nginx (Linux)
Gunicorn setup

Nginx reverse proxy

Basic Linux commands for deployment

প্র্যাকটিস:

নিজের লিনাক্স সার্ভারে Django deploy করার চেষ্টা করো

✅ Day 102: Deployment on Heroku
Heroku basics

Deploy Django app on Heroku

Environment variables handling

প্র্যাকটিস:

Heroku তে Django অ্যাপ deploy করো

✅ Day 103: Testing in Django
Unit testing basics

Client API for testing views

Writing test cases

প্র্যাকটিস:

simple test case লিখো

view ও model test করো

✅ Day 104: Debugging & Logging
Django debug toolbar

Logging configuration

Common debugging tips

প্র্যাকটিস:

debug toolbar install করো

custom logging যোগ করো

✅ Day 105: Final Mini Project – Blog Application
Apply সব শেখা কনসেপ্ট

User authentication

CRUD operations

API endpoints

প্রজেক্ট আইডিয়া:

ব্লগ পোস্ট create, read, update, delete

ইউজার রেজিস্ট্রেশন ও লগইন

REST API সহ প্রজেক্ট বানানো
