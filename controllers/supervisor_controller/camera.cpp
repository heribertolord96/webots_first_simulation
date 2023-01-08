#VRML_SIM R2020a utf8
WorldInfo {
  basicTimeStep 16
}
Viewpoint {
  orientation -0.876359402984095 -0.45566863509949757 -0.15607783887509905 0.7451868832402738
  position -0.16359178527765517 0.379331820393452 -0.14902504232260907
}
TexturedBackground {
}
TexturedBackgroundLight {
}
WoodenBox {
  translation -0.99 0.04 -0.28
  size 0.1 0.1 0.1
}
WoodenBox {
  translation 0.37 0.05 0
  name "wooden box(1)"
  size 0.1 0.1 0.1
}
WoodenBox {
  translation -0.3179144070989476 0.04996075999999999 0.6944931418494273
  rotation -8.944994505071341e-19 1 1.0521918613212376e-17 -0.3184132761312953
  name "wooden box(2)"
  size 0.1 0.1 0.1
  mass 0.2
}
WoodenBox {
  translation 1.0650308101158255 0.04996076000000001 0.8102834876544737
  rotation -8.232254805356165e-17 0.9999999999999999 -1.2974982026886997e-16 -0.10793819378612127
  name "wooden box(3)"
  size 0.1 0.1 0.1
  mass 0.2
}
WoodenBox {
  translation -0.2261319992009948 0.049960760000000014 -1.013010004301948
  rotation 2.158299117113244e-16 1 -3.747062959308555e-16 -0.04502683287897378
  name "wooden box(4)"
  size 0.1 0.1 0.1
  mass 0.2
}
WoodenBox {
  translation 0.6710701932013267 0.049960760000000014 -1.1527785159373283
  rotation 4.465263505803202e-16 0.9999999999999999 -5.766555120720635e-16 -0.045051812689623806
  name "wooden box(5)"
  size 0.1 0.1 0.1
  mass 0.2
}
E-puck {
  hidden position_0_0 2974.729547250513
  hidden position_0_1 3156.7186252534098
  hidden linearVelocity_0 0.014362446380029717 -4.047765571613672e-09 0.02060780265456431
  hidden angularVelocity_0 -5.52272699903991e-05 -8.910525503972127e-06 4.320374733933919e-05
  hidden rotation_1 1 0 0 3.500288352611039
  hidden rotation_2 -0.9999999999999999 0 0 2.5596010492573433
  translation -1.2249665968730072 -3.195228438651783e-05 -0.42011215293655496
  rotation 0.0002856613746284274 0.9999995361237496 0.0009198640469060775 -2.532919908060427
  controller "EPuckAvoideCollision"
}
Solid {
  translation -0.7170315286079179 0.04958907968091047 0.1833958677009017
  rotation -0.9838582436083577 0.17748065180700137 0.022881755134592167 -1.9322480248414518
  children [
    DEF Circle Shape {
      appearance PBRAppearance {
        baseColorMap ImageTexture {
          url [
            "textures/red_brick_wall.jpg"
          ]
        }
        roughness 1
        metalness 0
      }
      geometry DEF BALL_GEOMETRY Sphere {
        radius 0.05
        subdivision 2
      }
    }
  ]
  boundingObject USE BALL_GEOMETRY
  physics Physics {
  }
  linearVelocity 0 -1.3570366640911004e-16 0
}
Solid {
  translation 0.970178 0.04958907968091047 -0.681844
  rotation 0.2287938288360491 0.5142981359600315 0.826529377115283 -2.929829542883372
  children [
    USE Circle
  ]
  name "solid(2)"
  boundingObject USE BALL_GEOMETRY
  physics Physics {
  }
  linearVelocity 0 -1.3570366640911004e-16 0
}
Solid {
  translation -0.5997208140661624 0.04958907968091047 0.21651973643824365
  rotation 0.8341641250441875 0.01699572368444786 0.5512543495208967 -2.147234549846532
  children [
    USE Circle
  ]
  name "solid(9)"
  boundingObject USE BALL_GEOMETRY
  physics Physics {
  }
  linearVelocity 0 -1.3570366640911004e-16 0
}
Solid {
  translation 0.3182012719094375 0.029215199999999997 -0.09702376096134105
  rotation 0.7088987743984208 0.1750093980896288 0.6832526898861965 1.6056377832734658
  children [
    DEF G0 Group {
      children [
        Transform {
          translation 0 0.05 0
          children [
            DEF globe Shape {
              geometry Sphere {
                radius 0.03
                subdivision 2
              }
            }
          ]
        }
        Transform {
          translation 0 -0.05 0
          children [
            USE globe
          ]
        }
        Shape {
          geometry Cylinder {
            height 0.1
            radius 0.01
          }
        }
      ]
    }
  ]
  name "solid(6)"
  contactMaterial "dumbbell"
  boundingObject USE G0
  physics Physics {
    density -1
    mass 2
    centerOfMass [
      0 0.01 0
    ]
  }
  linearVelocity 1.6333176540772216e-15 -8.526512829121202e-17 1.1808834986548771e-15
  angularVelocity 4.0064338071679464e-14 -3.342181684319863e-16 -5.5969273172478383e-14
}
Robot {
  translation 0.11166873628405388 0.03985273034108876 -0.4122431828849921
  rotation -3.0286111137680946e-06 0.9999999997798944 2.0761463749861453e-05 -0.24712589930705364
  children [
    DEF Body Shape {
      appearance PBRAppearance {
        baseColor 1 0 0
        metalness 0
      }
      geometry Box {
        size 0.1 0.05 0.2
      }
    }
    HingeJoint {
      jointParameters HingeJointParameters {
        position 53.82372470077807
        anchor 0.06 0 0.05
      }
      device [
        RotationalMotor {
          name "wheel1"
        }
      ]
      endPoint DEF wheel1 Solid {
        translation 0.059999999998146564 7.753805222178318e-06 0.04999723616189018
        rotation -0.6996230571067616 0.6990661528833916 0.14776363509809665 2.8479580960883983
        children [
          DEF Wheel Shape {
            appearance PBRAppearance {
              baseColor 0 1 0
              metalness 0
            }
            geometry Cylinder {
              height 0.02
              radius 0.04
            }
          }
        ]
        name "wheel1"
        boundingObject USE Wheel
        physics DEF Wheel_Ph Physics {
        }
        linearVelocity -8.027960086350759e-13 3.1805734774096276e-16 2.725204296258936e-12
        angularVelocity 7.125699818213968e-11 -2.2388615253405897e-12 1.7976920334656866e-11
      }
    }
    HingeJoint {
      jointParameters HingeJointParameters {
        position 23.99985078524883
        anchor -0.06 0 0.05
      }
      device [
        RotationalMotor {
          name "wheel2"
        }
      ]
      endPoint DEF wheel2 Solid {
        translation -0.06000000000188266 7.751971350752278e-06 0.04999723741647365
        rotation -0.4731492031401617 0.472772570864859 0.7433814147566925 1.862326539957691
        children [
          USE Wheel
        ]
        name "wheel2"
        boundingObject USE Wheel
        physics USE Wheel_Ph
        linearVelocity -7.373759289480385e-13 -7.068371646115085e-17 2.463223059404151e-12
        angularVelocity 5.98402980321627e-11 -2.2402609246676585e-12 1.5099228139524853e-11
      }
    }
    HingeJoint {
      jointParameters HingeJointParameters {
        position 53.82373392443454
        anchor 0.06 0 -0.05
      }
      device [
        RotationalMotor {
          name "wheel3"
        }
      ]
      endPoint DEF wheel3 Solid {
        translation 0.05999999999796185 7.753822449489035e-06 -0.050002763790098756
        rotation -0.6996227087987796 0.699065804852668 0.14776693073468572 2.8479516407388368
        children [
          USE Wheel
        ]
        name "wheel3"
        boundingObject USE Wheel
        physics USE Wheel_Ph
        linearVelocity -5.854659343170582e-13 -1.0601878321303024e-16 2.780683762694246e-12
        angularVelocity 7.124825307465614e-11 -2.2405948296280588e-12 1.7977379812222167e-11
      }
    }
    HingeJoint {
      jointParameters HingeJointParameters {
        position 23.999862511622517
        anchor -0.06 0 -0.05
      }
      device [
        RotationalMotor {
          name "wheel4"
        }
      ]
      endPoint DEF wheel4 Solid {
        translation -0.060000000002067275 7.751996203859414e-06 -0.050002762514089215
        rotation -0.47314581667489247 0.4727691870952359 0.7433857221499205 1.862320990134978
        children [
          USE Wheel
        ]
        name "wheel4"
        boundingObject USE Wheel
        physics USE Wheel_Ph
        linearVelocity -5.198749650159609e-13 -7.067999173792615e-17 2.5171217262405394e-12
        angularVelocity 5.983220288207241e-11 -2.24164738397028e-12 1.5092290695333248e-11
      }
    }
    DistanceSensor {
      translation -0.02 0 0.1
      rotation 0 1 0 -1.87
      children [
        DEF sensor Shape {
          appearance PBRAppearance {
          }
          geometry DEF Sensor Box {
            size 0.01 0.01 0.01
          }
        }
      ]
      name "ds_right"
    }
    DistanceSensor {
      translation 0.02 0 0.1
      rotation 0 1 0 -1.27
      children [
        USE sensor
      ]
      name "ds_left"
    }
    Solid {
      translation 0 0.15 0
      children [
        Shape {
          appearance PBRAppearance {
            baseColor 0.2 0.5 0.4
            metalness 0
          }
          geometry Box {
            size 0.02 0.25 0.02
          }
        }
      ]
    }
    SliderJoint {
      jointParameters JointParameters {
        position 0.07999999999941144
        axis 0 1 0
      }
      device [
        LinearMotor {
          name "linear"
          minPosition -9.809974007495257e-06
          maxPosition 0.2
        }
      ]
      endPoint DEF hori Solid {
        translation -0.08500000266239338 0.1350015961220158 4.013456234019941e-14
        rotation 2.299462941163593e-08 8.420728993832845e-08 0.9999999999999963 4.561637858060224e-08
        children [
          DEF slide Shape {
            appearance PBRAppearance {
              baseColor 0 0 1
              metalness 0
            }
            geometry Box {
              size 0.15 0.02 0.02
            }
          }
          HingeJoint {
            jointParameters HingeJointParameters {
              axis 0 1 0
              anchor -0.075 1 0
            }
            device [
              RotationalMotor {
                name "rm"
              }
            ]
            endPoint Camera {
              fieldOfView 1
              width 4000
              height 4000
            }
          }
        ]
        name "solid(1)"
        boundingObject USE slide
        physics Physics {
          density 0.001
        }
      }
    }
  ]
  name "Robot"
  physics Physics {
  }
  recognitionColors [
    0 0 0
  ]
  controller "camera"
  linearVelocity -6.612610756517972e-13 -1.7053025658242405e-16 2.6208125098573553e-12
  angularVelocity -1.3255190030690355e-17 -2.2393136090471136e-12 4.1697906952859323e-16
}
RectangleArena {
  floorSize 3 3
}
Khr2hv {
  hidden position_0_0 4.1553662390314047e-13
  hidden position_0_1 -8.514863934772077e-08
  hidden position_0_2 8.561994240527498e-08
  hidden position_0_3 8.40869357633944e-09
  hidden position_0_4 -9.821336437868481e-09
  hidden rotation_2 0 -1 0 8.429369702178807e-08
  hidden position_2_0 -1.1820565054419193e-07
  hidden rotation_3 0.9999999999999999 0 0 1.1920928955078128e-07
  hidden position_3_0 -8.56160696732504e-08
  hidden rotation_4 1 0 0 8.429369702178807e-08
  hidden position_4_0 4.200954313034082e-08
  hidden rotation_5 0.9999999999999999 0 0 4.2146848510894035e-08
  hidden position_5_0 -6.839879429660715e-08
  hidden rotation_6 0 -1 0 6.664001874625056e-08
  hidden rotation_7 0 1 0 8.429369702178807e-08
  hidden position_7_0 -7.894562212282285e-08
  hidden rotation_8 -1 0 0 7.884953353001448e-08
  hidden position_8_0 -4.597653811057293e-08
  hidden rotation_9 -1 0 0 4.2146848510894035e-08
  hidden position_9_0 5.7180441333138136e-09
  hidden position_10_0 6.79051062860718e-08
  hidden rotation_11 0 1 0 6.664001874625056e-08
  hidden position_12_0 8.010097401959053e-09
  hidden position_13_0 8.041544389317135e-09
  hidden position_15_0 -7.742309483615903e-09
  hidden position_16_0 -7.071286282233712e-09
  translation 0.04770239969089307 0.20867424766509715 1.2137527963849197
  rotation 0.999587983248595 0.02029192596511737 0.02030028289538626 -1.571641868395671
  name "KHR-2HV(1)"
}